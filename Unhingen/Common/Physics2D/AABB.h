#pragma once

#include "glm\glm.hpp"
#include <GL\glew.h>

class tuAABB {
private:
	glm::vec2 pos;
	glm::vec2 dim;
	glm::vec2 vel;

public:
	tuAABB ( GLfloat x, GLfloat y, GLfloat w, GLfloat h ) { 
		pos.x = x;
		pos.y = y;
		dim.x = w;
		dim.y = h;
	}

	tuAABB ( const glm::vec2 &pos, const glm::vec2 &dim ) { this->pos = pos; this->dim = dim; }

	inline glm::vec2 GetPosition () { return pos; }
	inline void SetPosition ( GLfloat x, GLfloat y ) { pos.x = x; pos.y = y; }
	inline void SetPosition ( const glm::vec2 &pos ) { this->pos = pos; }

	inline glm::vec2 GetDimensions () { return dim; }
	inline void SetDimensions ( GLfloat w, GLfloat h ) { dim.x = w; dim.y = h; }
	inline void SetDimensions ( const glm::vec2 &dim ) { this->dim = dim; }
};
