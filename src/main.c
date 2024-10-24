#include "raylib.h"
void init();
void quit();
void render();
int main (){
	init();
  
  while (!WindowShouldClose()){
    BeginDrawing();
    ClearBackground(RAYWHITE);
    
    
    EndDrawing();
  }

	quit();
  return 0;
}


void init(){
	InitWindow(640, 480, "Shape rendering");
	SetTargetFPS(30);
}
void quit(){
  CloseWindow();	
}
void render(){
	
}
