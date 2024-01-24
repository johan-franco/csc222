mkdir -p ./build/
g++ mines.cpp -I/Users/994612/homebrew/opt/sdl2/include -I/Users/994612/homebrew/opt/sdl_ttf/include   minesweeper.cpp -L/Users/994612/homebrew/opt/sdl2/lib -LUsers/994612/homebrew/opt/sdl_ttf/lib -lSDL2 -o ./build/sdlBin
./build/sdlBin