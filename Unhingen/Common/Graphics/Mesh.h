#pragma once

#include "..\Common\Types.h"
#include <GL\glew.h>
#include <vector>
#include "Vertex\Texture2DVertex.h"

class Mesh {
	public:
		Mesh ( const std::vector<Texture2DVertex>& vertices );
		Mesh ( Texture2DVertex *vertices, u_int numVertices );
		void Draw ();
		virtual ~Mesh ();
	private:
		enum { POSITION, TEXCOORD, NUM_BUFFERS };
		GLuint	vao;
		GLuint	vbo[NUM_BUFFERS];
		u_int	drawCount;
};