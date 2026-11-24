#include <stdio.h>
#include <raylib.h>

int main(){
    int screen_width = 800;
    int screen_height = 600;

    InitWindow(screen_width, screen_height, "TEST");

    while (!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(BLACK);
        DrawRectangle(100, 100, 400, 300, BLUE);
        
        EndDrawing();
    

    
    }
    CloseWindow();

    return 0;
}

