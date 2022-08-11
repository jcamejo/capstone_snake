# CPPND: Capstone Snake Game Example

This is a starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

The Capstone Project gives you a chance to integrate what you've learned throughout this program. This project will become an important part of your portfolio to share with current and future colleagues and employers.

In this project, you can build your own C++ application or extend this Snake game, following the principles you have learned throughout this Nanodegree Program. This project will demonstrate that you can independently create applications using a wide range of C++ features.

## Rubrics worked

- README (All Rubric Points REQUIRED)

- The project demonstrates an understanding of C++ functions and control structures.
  examples:
    - [Added helpers to reset the game] (https://github.com/jcamejo/capstone_snake/blob/master/src/game.cpp#L104-L108)
    - [Utility functions on its own namespace] (https://github.com/jcamejo/capstone_snake/blob/master/src/helpers.cpp#L4-L7)
    - [switch in the config file with mapping configuration] (https://github.com/jcamejo/capstone_snake/blob/master/src/config.cpp#L24-L44)

- The project reads data from a file and process the data, or the program writes data to a file.
  - file configurations
    - [example 1](https://github.com/jcamejo/capstone_snake/blob/master/src/config.cpp)
    - [example 2](https://github.com/jcamejo/capstone_snake/blob/master/src/main.cpp#L12-L16)

- The project accepts user input and processes the input
  - Small enhancements on the player input
    - [closing the game while pressing esc] (https://github.com/jcamejo/capstone_snake/blob/master/src/controller.cpp#L46-L48)

  - class encapsulate behavior
    - [added behaviour for hitting a wall](https://github.com/jcamejo/capstone_snake/blob/master/src/snake.cpp#L106-L109)

 - Overloaded functions allow the same function to operate on different parameters.
   - [Overload snake constructor for backwards compatibility](https://github.com/jcamejo/capstone_snake/blob/master/src/snake.h#L18-L30)

- The project makes use of references in function declarations.

 - passing config as references
  - [passing config variable as reference in renderer](https://github.com/jcamejo/capstone_snake/blob/master/src/renderer.h#L14)
  - [passing config variable as reference in game](https://github.com/jcamejo/capstone_snake/blob/master/src/game.h#L15)

## Added features

- A configuration file with the following setup
  screenWidth 640; // Screen Width (Window Dimensions)
  screenHeight 640; // Screen Height (Window Dimensions)
  gridWidth 32; // Grid Width (Grid Width: Size of the game board for the snake)
  gridHeight 32; // Grid Height (Grid Height: Size fo the game board for the snake)
  wallEnabled 1; // 1 to make the wall enabled to play or 0 to make the snake swap around the walls

- Display message at the end of the game that shows the score and closes the game

- Quality of life, improvements:
  - restarting the game after losing
  - using configuration file object, passing by reference
  - can cloase the game by pressing ESC
  - helper methods for show message and reset game

## Dependencies for Running Locally

- cmake >= 3.7
  - All OSes: [click here for installation instructions](https://cmake.org/install/)
- make >= 4.1 (Linux, Mac), 3.81 (Windows)
  - Linux: make is installed by default on most Linux distros
  - Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  - Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
- SDL2 >= 2.0
  - All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
    > Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
- gcc/g++ >= 5.4
  - Linux: gcc / g++ is installed by default on most Linux distros
  - Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  - Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.

## CC Attribution-ShareAlike 4.0 International

Shield: [![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

This work is licensed under a
[Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[![CC BY-SA 4.0][cc-by-sa-image]][cc-by-sa]

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-image]: https://licensebuttons.net/l/by-sa/4.0/88x31.png
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg
