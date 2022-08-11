#include <iostream>
#include <unordered_map>
#include <utility>

#ifndef CONFIG
#define CONFIG

#define SCREEN_WIDTH 1
#define SCREEN_HEIGHT 2
#define GRID_HEIGHT 3
#define GRID_WIDTH 4
#define WALL_ENABLED 5

class Config
{

private:
  std::unordered_map<std::string, int> _configs = {
      {"screenWidth", SCREEN_WIDTH},
      {"screenHeight", SCREEN_HEIGHT},
      {"gridWidth", GRID_WIDTH},
      {"gridHeight", GRID_HEIGHT},
      {"wallEnabled", WALL_ENABLED},
  };

public:
  std::size_t kFramesPerSecond{60};
  std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  std::size_t kScreenWidth{640};
  std::size_t kScreenHeight{640};
  std::size_t kGridWidth{32};
  std::size_t kGridHeight{32};
  bool wallEnabled{false};

  Config(std::string path);
  ~Config(){};
};

#endif