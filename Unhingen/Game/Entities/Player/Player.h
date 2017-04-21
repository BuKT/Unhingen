#pragma once
#include "GL/glew.h"
#include "../Common/Game/Entity/Entity.h"

// Player class, implement the tu_Entity
class Player : public tuEntity {
public:
	virtual void Init() override;

	virtual void Update() override;

	virtual void Render() override;
	
	inline void SetX( float x ) { pos.x = (GLfloat)x; }
	inline void SetY( float y ) { pos.y = (GLfloat)y; }
	inline float GetX() { return pos.x; }
	inline float GetY() { return pos.y; }

private:
	glm::vec2 pos;
};
