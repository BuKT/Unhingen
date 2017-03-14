#include "ConvexShape.h"
#include "..\..\System\Error.h"

/*static class NonConvexShapeException : public std::exception {
	virtual const char* what() const throw() {
		return "Points do not form convex shape";
	}
} ConvexEx;*/

tuConvexShape::tuConvexShape ( const std::vector<glm::vec2> &points ) {
	if ( IsConvex(points) ) { this->points = points; }
	else { throw ConvexEx; }
}

boolean tuConvexShape::IsConvex( const std::vector<glm::vec2> &points ) {
	// Check if the points specified form a convex shape  
	// https://en.wikipedia.org/wiki/Gift_wrapping_algorithm - jarvis march in 2D cases
	// Assuming points are in counte-clockwise order the moment the non-initial polar angle makes
	// a left turn, the shape is then known to be not-convex.
	/*
	jarvis(S)
    pointOnHull = leftmost point in S
    i = 0
    repeat
      P[i] = pointOnHull
      endpoint = S[0]      // initial endpoint for a candidate edge on the hull
      for j from 1 to |S|
         if (endpoint == pointOnHull) or (S[j] is on left of line from P[i] to endpoint)
            endpoint = S[j]   // found greater left turn, update endpoint
      i = i+1
      pointOnHull = endpoint
    until endpoint == P[0]      // wrapped around to first hull point
	*/

	glm::vec2 pointOnHull = points[0];
	glm::vec2 endpoint;
	std::vector<glm::vec2> P = std::vector<glm::vec2>();

	int i = 0;
	do {
		P.push_back( pointOnHull );
		endpoint = points[0];
		for (int j = 1; j < points.size(); j++) {
			if ( endpoint == pointOnHull || IsLeftOfLine(points[j], P[i], endpoint) ) {
				endpoint = points[j];
			}
			else {
				return false;
			}
		}
		i++;
		pointOnHull = endpoint;
	} while (endpoint != points[0]);

	return true;
}

boolean tuConvexShape::IsLeftOfLine(glm::vec2 S, glm::vec2 P1, glm::vec2 P2) {
	// Check if S is on the left of the line P1P2
	// Calculate the determinant of P1 P2
	// where 0 is on the line, -1 is on the left and +1 is on the right
	int side = (P2.y - P1.x) * (S.y - P1.y) - (P2.y - P1.y) * (S.x - P1.x);
	if ( side < 0 ) return true;
	return false;
}
