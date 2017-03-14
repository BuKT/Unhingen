#pragma once

#include <iostream>
#include "..\System\Error.h"
#include "..\Common\Physics2D\ConvexShape.h"

class Tests {
private:
	inline static void TestConvexShape() {	
		std::vector<glm::vec2> points;
		glm::vec2 p1 = glm::vec2();
		glm::vec2 p2 = glm::vec2();
		glm::vec2 p3 = glm::vec2();
		glm::vec2 p4 = glm::vec2();

		p1.x = 1; p1.y = 1;
		p2.x = 1; p2.y = 2;
		p3.x = 2; p3.y = 2;
		p4.x = 2; p4.y = 1;

		points = { p1, p2, p3, p4 };

		tuConvexShape square = tuConvexShape( points );
	}

public:
	inline static void RunTests() {
		TestConvexShape();	
	}

};