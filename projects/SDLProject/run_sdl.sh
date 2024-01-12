mkdir -p ./build/
g++ mines.cpp -I/Users/994612/homebrew/opt/sdl2/include minesweeper.cpp   -L/Users/994612/homebrew/opt/sdl2/lib -lSDL2 -o ./build/sdlBin
./build/sdlBin