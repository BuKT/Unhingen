#pragma once

#include "..\Common\Types.h"
#include <SDL2\SDL.h>
#include <string>

class Display {
	public:
		Display ( const u_short width, const u_short height, const std::string& title );
		void SetClearColor ( float r, float g, float b, float a );
		void SetClearColor ( u_int color );
		void Clear ();
		void Update ();
		inline boolean IsRunning () { return running; }
		inline void SetRunning ( boolean running ) { this->running = running; }
		inline void Close () { running = false; }
		virtual ~Display ();
	private:
		boolean			running;
		SDL_Window		*window;
		SDL_GLContext	glContext;
		void InitSDL ();
		void InitGLEW ();
};