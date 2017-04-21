#pragma once
#include "../Common/Types.h"
#include "glm/glm.hpp"
#include "../Common/Graphics/Texture/Texture2D.h"

class tu_Sprite {
public:
	tu_Sprite( const std::string& fileName );
	tu_Sprite( const std::string& fileName, float x, float y );
	//tu_Sprite( tuTex2D* texture );
	//tu_Sprite( tuTex2D* texture, float x, float y );

	// draw the texture
	void Draw();
	void Draw(float x, float y);

	~tu_Sprite(); // needed?

private:
	glm::vec2 pos;
	tuTex2D tex;
	boolean visible;
};