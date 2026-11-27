#include <stdio.h>
#include <raylib.h>
#include "interface.h"

int main(){
    int screen_width = 800;
    int screen_height = 600;

    InitWindow(screen_width, screen_height, "Calculator");
    SetTargetFPS(60);

    while (!WindowShouldClose()){


        BeginDrawing();

        ClearBackground(BLACK);

        HandleMouseInput();

        DrawCalculator();


        
        EndDrawing();
    

    
    }
    CloseWindow();

    return 0;
}

