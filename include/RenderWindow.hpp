#pragma once
#include <SDL2/SDL.h>
#include "Entity.hpp"
#include "Player.hpp"

class RenderWindow {
    public:
        RenderWindow(const char *title, int width, int height);
        void clear();
        void render(SDL_Rect *rect, SDL_Texture *tex, Uint8 r, Uint8 g, Uint8 b, Uint8 a);
        void render(Entity* entity);
        void render(Player player);
        SDL_Texture* loadTexture(const char* file);
        void display();
        ~RenderWindow();

    private:
        SDL_Renderer *renderer;
        SDL_Window *window;
};
