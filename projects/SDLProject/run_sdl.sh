mkdir -p ./build/
g++ -I/Users/994612/homebrew/opt/sdl2/include chess.cpp -L/Users/994612/homebrew/opt/sdl2/lib -lSDL2 -o ./build/sdlBin
./build/sdlBin