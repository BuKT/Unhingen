#pragma once
#include <vector>
#include "glm\glm.hpp"
#include "..\Types.h"

/*
Represent a convex shape as a set of points with some validations performed on the shape.
*/
class tuConvexShape {
private:
	std::vector<glm::vec2> points = std::vector<glm::vec2>();

	boolean IsConvex( const std::vector<glm::vec2> &points );
	boolean IsLeftOfLine( glm::vec2 S, glm::vec2 P1, glm::vec2 P2 );

public:

	tuConvexShape ( const std::vector<glm::vec2> &points );
	//~tuConvexShape ();	
};