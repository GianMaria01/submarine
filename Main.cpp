#include <iostream>
#include "raylib.h"

int main(){

    InitWindow(800, 600, "random dot?");
    Rectangle griglia = {50, 50, 550, 550};

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

            //---DISEGNO GRIGLIA---
            for(int x=0; x<=(50*11);x+=50){
                DrawLine(x,50,x,(50*11),BLACK);
            }
            for(int y=0; y<=(50*11);y+=50){
                DrawLine(50,y,(50*11),y,BLACK);
            }

            if(CheckCollisionPointRec(GetMousePosition(),griglia) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
                std::cout<<"premuto";
            }
        
        
        EndDrawing();
    }
    CloseWindow();
    return 0;
}