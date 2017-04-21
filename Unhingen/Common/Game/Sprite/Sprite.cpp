#include "Sprite.h"

tu_Sprite::tu_Sprite(const std::string & fileName) {
	tex = tuTex2D( fileName );
}

tu_Sprite::tu_Sprite(const std::string & fileName, float x, float y) {
	tex = tuTex2D( fileName );
}

/*
tu_Sprite::tu_Sprite(tuTex2D * texture) {
}

tu_Sprite::tu_Sprite(tuTex2D * texture, float x, float y) {
}
*/

void tu_Sprite::Draw() {
}

void tu_Sprite::Draw(float x, float y) {
}

tu_Sprite::~tu_Sprite() {
}
