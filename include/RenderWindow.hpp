#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class RenderWindow{

private:
	SDL_Window* window;
	SDL_Renderer* renderer; //Uses OpenGL
public:
	RenderWindow(const char* p_title, int p_width, int p_height);	
	void CleanUp();
};