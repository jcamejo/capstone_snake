#include <iostream>
#include "config.h"
#include "controller.h"
#include "game.h"
#include "renderer.h"

int main()
{
  Config config("../config");
  Renderer renderer(config);
  Controller controller;
  Game game(config.kGridWidth, config.kGridHeight);
  game.Run(controller, renderer, config.kMsPerFrame);
  std::cout << "Game has terminated successfully!\n";
  std::cout << "Score: " << game.GetScore() << "\n";
  std::cout << "Size: " << game.GetSize() << "\n";
  return 0;
}