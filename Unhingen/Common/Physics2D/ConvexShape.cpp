#include "ConvexShape.h"
#include "..\..\System\Error.h"

tuConvexShape::tuConvexShape ( const std::vector<glm::vec2> &points ) {
	if ( IsConvex(points) ) { this->points = points; }
	else { err::ErrMsg("Error: Points given do not form a convex shape"); return; }
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
	while (endpoint != this->points[0]) {
		P[i] = pointOnHull;
		endpoint = points[0];
		for (int j = 1; j < points.size(); j++) {
			if (endpoint == pointOnHull || IsLeftOfLine( points[j], P[i], endpoint )) {
				endpoint = points[j];
			}
		}
		i++;
		pointOnHull = endpoint;
	}

	return boolean();
}

boolean tuConvexShape::IsLeftOfLine(glm::vec2 S, glm::vec2 P1, glm::vec2 P2) {
	return boolean();
}
