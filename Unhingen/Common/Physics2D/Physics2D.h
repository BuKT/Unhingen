#pragma once

#include "..\Common\Types.h"
#include "glm\glm.hpp"
#include "AABB.h"

// tu for Team Unhinged, _s for static
class tuPhysics2D_s {
private:
	// Struct which represents information about a collision
	// i.e it may be used
	struct CollisionInfo_t {
		glm::vec2 pos;
		glm::vec2 mtv; // minumum transition vector
	};

	tuPhysics2D_s(); // private constructor

public:
	/*
	Author: Cory Sabol

	Simple 2D "physics" helper library. It provides simple AABB collsion detection and resolution
	as well as SAT collsion detection and resolution, simple movement operations, such as gravity and other forces.
	
	CollisionDetect_AABB( r1, r2 ) --> r1, r2: AABB's to check for overlap, returns boolean true if overlap, false otherwise
	CollisionResolve_AABB( &r1, &r2 ) --> r1, r2: AABB's to resolve collsion between.
	*/

	static boolean CollisionDetect_AABB ( tuAABB r1, tuAABB r2 );
	static void CollisionResolve_AABB ( const tuAABB &r1, const glm::vec2 &r1Vel, 
										const tuAABB &r2, const glm::vec2 &r2Vel );

	static CollisionInfo_t SATCollision ( /*takes shapes once shape class is in place*/ );
};
