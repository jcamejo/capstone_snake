#include "config.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <stdexcept>

Config::Config(std::string configPath)
{
  std::string line;
  std::string key;
  int value;

  std::ifstream filestream(configPath);

  if (filestream.is_open())
  {
    while (std::getline(filestream, line))
    {
      std::istringstream linestream(line);

      while (linestream >> key >> value)
      {
        switch (_configs[key])
        {
        case SCREEN_WIDTH:
          kScreenWidth = value;
          break;
        case SCREEN_HEIGHT:
          kScreenHeight = value;
          break;
        case GRID_WIDTH:
          kGridWidth = value;
          break;
        case GRID_HEIGHT:
          kGridHeight = value;
          break;
        default:
          throw std::invalid_argument("Invalid configuration");
          break;
        }
      }
    }
  }
}