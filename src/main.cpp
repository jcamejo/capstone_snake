#include <iostream>
#include <iostream>
#include "config.h"
#include "helpers.cpp"
#include "controller.h"
#include "game.h"
#include "renderer.h"

int main()
{
  // Rubic addressed: Reading configuration from a file object
  Config config("../config");
  Renderer renderer(config);
  Controller controller;
  Game game(config);
  game.Run(controller, renderer, config.kMsPerFrame);
  std::cout << "Game has terminated successfully!\n";
  std::cout << "Score: " << game.GetScore() << "\n";
  std::cout << "Size: " << game.GetSize() << "\n";
  return 0;
}