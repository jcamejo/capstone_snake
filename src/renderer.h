#ifndef RENDERER_H
#define RENDERER_H

#include <vector>
#include <iostream>
#include <string>
#include "SDL.h"
#include "snake.h"
#include "config.h"

class Renderer
{
public:
  Renderer(Config config);
  ~Renderer();

  void Render(Snake const snake, SDL_Point const &food);
  void UpdateWindowTitle(int score, int fps);

private:
  void DrawColor(Uint8 *r, Uint8 *g, Uint8 *b, Uint8 *a);

  SDL_Window *sdl_window;
  SDL_Renderer *sdl_renderer;

  const std::size_t screen_width;
  const std::size_t screen_height;
  const std::size_t grid_width;
  const std::size_t grid_height;
};

#endif