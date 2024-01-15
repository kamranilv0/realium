#include <bits/stdc++.h>
#include "src/graphics/window.h"

#define GRID_SIZE 10
#define BOMB_COUNT 10

int generateGrid(std::vector<std::vector<int>> &grid);
int printGrid(std::vector<std::vector<int>> &grid);
int calculateGrid(std::vector<std::vector<int>> &grid);

int main(){
    using namespace sparky;
    using namespace graphics;
    Window window("Sparky!", 800, 600);
    glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

    GLuint vao;
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);
    
    while (!window.closed())
    {
        window.clear();
        #if 0
        glBegin(GL_QUADS);
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(-0.5f,  0.5f);
        glVertex2f( 0.5f,  0.5f);
        glVertex2f( 0.5f, -0.5f);
        glEnd();
        #endif

        glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
        window.update();
    }
    
    return 0;
}
