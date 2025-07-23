#ifndef BARRIERES_H
#define BARRIERES_H

#include <SDL.h>

#define MAX_BARRIERS 100

typedef struct {
    int x, y, width, height;
} Barrier;

extern Barrier barriers[100];

void initBarriers();
void initLevel(int level);
void drawBarriers(SDL_Renderer* renderer);

#endif // BARRIERES_H
