#include "raylib.h"

int main()
{
    InitWindow(800, 600, "My First Program");

    Vector2 ballPosition = { 400.0f,300.0f };
    
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        
        // clears the screen
        ClearBackground(BLACK);

        // get the mouse position
        Vector2 mousePosition = GetMousePosition();

        ballPosition = mousePosition;

        DrawCircleV(ballPosition, 20.0f, BLUE);

        EndDrawing();
    }

    CloseWindow();
    
    return 0;
}