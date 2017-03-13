#include "Physics2D.h"
#include "ConvexShape.h"

/*
EVAL DRAW COLLISON ALGORITHM
aabb_collision ( player_t p, dt ) {
// grab some player info
rect_t a = p.aabb;
dx = p.xvel*dt; dy = p.yvel*dt;
pw = a.w; ph = a.h;
grounded = false;
on_ground = false;

// use the blocks array to check for collisions
for ( i=0; i<NUM_BLOCKS; i++ ) {
rect_t b = blocks[i];

if ( a.x+pw/2 > b.x-b.w/2 && a.x-pw/2 < b.x+b.w/2 ) {
// check for and resolve y cols
// collision with top side of player
if ( a.y-ph/2 > b.y+b.h/2 && a.y-ph/2 + dy < b.y+b.h/2 ) {
// move the player flush against the bottom of b
// not quite flush...
a.y = (b.y + b.h/2) + ph/2;
p.yvel = 0;
}
// collision with bottom side of player
if ( a.y+ph/2 < b.y-b.h/2 && a.y+ph/2 + dy > b.y-b.h/2 ) {
// move the player flush against the top of b
a.y = b.y - b.h/2 - ph/2;
p.yvel = 0;
grounded = true;
}
}
if ( a.y+ph/2 > b.y-b.h/2 && a.y-ph/2 < b.y+b.h/2 ) {
// check for and resolve x cols
// collsion with left side of player
if ( a.x-pw/2 > b.x+b.w/2 && a.x-pw/2 + dx < b.x+b.w/2 ) {
// set the player flush against the right side of b
a.x = b.x + b.w/2 + pw/2;
p.xvel = 0;
}
// collision with the right side of the player
if ( a.x+pw/2 < b.x-b.w/2 && a.x+pw/2 + dx > b.x-b.w/2 ) {
// set the player flush against the left side of b
a.x = b.x - b.w/2 - pw/2;
p.xvel = 0;
}
}

if (grounded == true && a.y+ph/2 == b.y-b.h/2 && a.x+pw/2 > b.x && a.x-pw/2 < a.x + b.w) {
on_ground = true;
}
}

if ( world[int(p.tile.y)+1][int(p.tile.x)] == 1 ||
world[int(p.tile.y)+1][int(p.tile.x-p.w/2)] == 1 ||
world[int(p.tile.y)+1][int(p.tile.x+p.w/2)] == 1 ) {
p.grounded = true;
} else {
p.grounded = false;
}

if (on_ground == true) {
	p.grounded = true;
}
else if (on_ground == false) {
	p.grounded = false;
}
}

*/

boolean tuPhysics2D_s::CollisionDetect_AABB ( tuAABB r1, tuAABB r2 ) {
	return boolean();
}

void tuPhysics2D_s::CollisionResolve_AABB ( const tuAABB & r1, const glm::vec2 & r1Vel, 
										    const tuAABB & r2, const glm::vec2 & r2Vel ) {

}

void tuPhysics2D_s::SATCollision ( tuConvexShape s1, tuConvexShape s2, CollisionInfo_t colInfo ) {
	colInfo.pos = glm::vec2();
}
