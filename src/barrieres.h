#ifndef BARRIERES_H
#define BARRIERES_H

#include <SDL.h>

#define MAX_BARRIERS 44

typedef struct {
    int x, y, width, height;
} Barrier;

extern Barrier barriers[MAX_BARRIERS];

void initBarriers();
void initLevel(int level);
void drawBarriers(SDL_Renderer* renderer);

#endif // BARRIERES_H
