#include <iostream>
#include "raylib.h"
#include"Funzioni.hpp"

// TODO: Verificare l'eccesivo utilizzo di CPU

int main(){

    const int wDisplay = 800, hDisplay = 600;

    Rectangle griglia = {50, 50, 550, 550};
    int gamephase = 0;
    
    InitWindow(wDisplay, hDisplay, "submarine");
    // SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        if(gamephase==0){

            const Rectangle BottoneStart = {300,300,200,75};

            DrawRectangle(0,0,wDisplay,hDisplay,SKYBLUE);
            DrawText("welcome to submarine",133,100,50,BLACK);

            // Bottone start
            DrawRectangleRec(BottoneStart,GRAY);
            DrawText("start",338,318,50,BLACK);

            // Interazione BottoneStart
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) || IsMouseButtonPressed(MOUSE_BUTTON_RIGHT)){
                if(CheckCollisionPointRec(GetMousePosition(),BottoneStart)) gamephase = 1;
            }

        }

        if(gamephase == 1) gamephase = GamePlay();
        
        
        EndDrawing();
    }
    CloseWindow();
    return 0;
}