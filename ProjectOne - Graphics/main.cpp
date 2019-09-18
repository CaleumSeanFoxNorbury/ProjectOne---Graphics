#include"SDL.h"
#undef main

int main() {
	
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* Window = SDL_CreateWindow("title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	SDL_Renderer* ren = SDL_CreateRenderer(Window, -1, 0);

	SDL_SetRenderDrawColor(ren, 0, 255, 0, 255);

	SDL_RenderClear(ren);

	SDL_RenderPresent(ren);

	SDL_Delay(3000);
	return(0);
}