#include <algorithm>
#include "mines.hpp"
#include <SDL2/SDL.h>
//#include "SDL_ttf.h"
#include <cstdlib> 
#include <time.h> 

#define SCREEN_WIDTH    800
#define SCREEN_HEIGHT   800
using namespace std; 
int main(int argc, char* argv[])
{
    // Unused argc, argv
    (void) argc;
    (void) argv;

    // Initialize SDL
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "SDL could not be initialized!" << std::endl
                  << "SDL_Error: " << SDL_GetError() << std::endl;
        return 0;
    }

    // Create window
    SDL_Window *window = SDL_CreateWindow("Minesweeper",
                                          SDL_WINDOWPOS_UNDEFINED,
                                          SDL_WINDOWPOS_UNDEFINED,
                                          SCREEN_WIDTH, SCREEN_HEIGHT,
                                          SDL_WINDOW_SHOWN);
    if(!window)
    {
        std::cout << "Window could not be created!" << std::endl
                  << "SDL_Error: " << SDL_GetError() << std::endl;
    }
    else
    {
        // Create renderer
        SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
        if(!renderer)
        {
            std::cout << "Renderer could not be created!" << std::endl
                      << "SDL_Error: " << SDL_GetError() << std::endl;
        }
        else
        {
            // Declare rect of square
            SDL_Rect squareRect;
            int y = 0;
            int x = 0;
            // Square dimensions: Half of the min(SCREEN_WIDTH, SCREEN_HEIGHT)
            squareRect.w = std::min(SCREEN_WIDTH, SCREEN_HEIGHT) / 2;
            squareRect.h = std::min(SCREEN_WIDTH, SCREEN_HEIGHT) / 2;

            // Square position: In the middle of the screen
            squareRect.x = SCREEN_WIDTH / 2 - squareRect.w / 2;
            squareRect.y = SCREEN_HEIGHT / 2 - squareRect.h / 2;

            Grid a;
            int m = 0;
            srand((unsigned) time(NULL));
            for (int i = 0; i < 16; i++) {
                for (int k = 0; k < 16; k++){
                    m = rand()%2;
                    cout << m << endl;
                    if(a.check_mines() < 40){
                        Boxes p(i, k, m);
                        a.map.push_back(p);
                        p.toString();
                        continue;
                    }
                    else{
                        Boxes l(i,k,false);
                        a.map.push_back(l);
                        l.toString();
                        continue;
                    }
                }
            }
            
            // Event loop exit flag
            bool quit = false;
            //TTF_Init();
            //TTF_Font *Font = TTF_OpenFont("/Users/994612/classwork/csc222/projects/SDLProject/Open_Sans/OpenSans.ttf", 10);
            //if(Font == NULL) {cout << "Font failed"<< endl;}
            // Event loop
            while(!quit)
            {
                SDL_Event e;
                SDL_WaitEvent(&e);

                // User requests quit
                if(e.type == SDL_QUIT)
                {
                    quit = true;
                }
                if(e.type == SDL_MOUSEBUTTONDOWN) {
                    SDL_GetMouseState(&x, &y);
                    cout << x << " "<< y <<endl;
                    Boxes clicked = a.map[a.find_box(x,y)];
                    cout << "You clicked a Box that had range of (" << clicked.xmin << "," << clicked.xmax<< ") to (" << clicked.ymin << "," << clicked.ymax << ")"<<endl;
                    cout<< "Amount of Mines: "<< a.check_mines()<< endl;
                    if (clicked.mine == true) {
                        cout << "You clicked on a mine, you lost.";
                        quit = true;
                    }
                    else{
                        
                        continue;
                    }
                }
                

                SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);

                SDL_RenderClear(renderer);
                SDL_SetRenderDrawColor( renderer, 0, 0, 0, 0 );  


                SDL_RenderDrawRect(renderer, &squareRect);
                for (int i = 0; i < 16; i++) {
                    for (int k = 0; k < 16; k++){
                        SDL_Rect rectToDraw = {k*50,i*50,50,50};
                        SDL_RenderDrawRect(renderer, &rectToDraw);
                    }
                }
                SDL_RenderPresent(renderer);
 
            }

            // Destroy renderer
            SDL_DestroyRenderer(renderer);
        }

        // Destroy window
        SDL_DestroyWindow(window);
    }

    // Quit SDL
    SDL_Quit();

    return 0;
}