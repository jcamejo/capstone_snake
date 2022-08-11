#include "helpers.h"
#include "SDL.h"

void helpers::ShowMessage(std::string title, std::string msg)
{
  SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, title.c_str(), msg.c_str(), NULL);
}