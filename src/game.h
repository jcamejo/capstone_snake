#ifndef GAME_H
#define GAME_H

#include <random>
#include "snake.h"
#include "SDL.h"
#include "controller.h"
#include "renderer.h"
#include "helpers.h"
#include "config.h"

class Game
{
public:
  Game(Config &config);
  void Run(Controller const &controller, Renderer &renderer,
           std::size_t target_frame_duration);
  int GetScore() const;
  int GetSize() const;

private:
  Config config;
  Snake snake;
  SDL_Point food;
  bool running{true};

  std::random_device dev;
  std::mt19937 engine;
  std::uniform_int_distribution<int> random_w;
  std::uniform_int_distribution<int> random_h;

  int score{0};

  void PlaceFood();
  void Update();
  void ShowMessage(std::string title, std::string msg);
  void ResetSnake();
};

#endif
