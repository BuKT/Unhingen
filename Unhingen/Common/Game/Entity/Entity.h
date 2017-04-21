#pragma once
#include "glm/glm.hpp"

// abstract
class tuEntity {
public:
	virtual void Init() = 0;
	virtual void Update() = 0;
	virtual void Render() = 0; // force something to have a Render function implementation
};