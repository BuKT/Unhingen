#pragma once
#include <vector>
#include "glm\glm.hpp"
#include "..\Types.h"

/*
Represent a convex shape as a set of points with some validations performed on the shape.
*/
class tuConvexShape {
private:
	std::vector<glm::vec2> points;

	boolean IsConvex();

public:
	tuConvexShape ( std::vector<glm::vec2> points );
	~tuConvexShape ();	
};