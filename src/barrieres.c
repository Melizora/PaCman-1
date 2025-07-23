#include "barrieres.h"
#include "barrieres.h"

void initLevel2Barriers();

// Définition du tableau des barrières.
Barrier barriers[100];
extern int currentLevel;

void initBarriers() {
    // H
    barriers[0].x = 206;
    barriers[0].y = 165;
    barriers[0].width = 57;
    barriers[0].height = 8;

    barriers[1].x = 315;
    barriers[1].y = 164;
    barriers[1].width = 160;
    barriers[1].height = 8;

    barriers[2].x = 260;
    barriers[2].y = 115;
    barriers[2].width = 52;
    barriers[2].height = 8;

    barriers[3].x = 360;
    barriers[3].y = 370;
    barriers[3].width = 90;
    barriers[3].height = 10;

    barriers[4].x = 150;
    barriers[4].y = 416;
    barriers[4].width = 350;
    barriers[4].height = 8;

    barriers[5].x = 130;
    barriers[5].y = 325;
    barriers[5].width = 50;
    barriers[5].height = 10;

    barriers[6].x = 120;
    barriers[6].y = 385;
    barriers[6].width = 35;
    barriers[6].height = 8;

    barriers[7].x = 495;
    barriers[7].y = 350;
    barriers[7].width = 100;
    barriers[7].height = 8;

    barriers[8].x = 550;
    barriers[8].y = 203;
    barriers[8].width = 40;
    barriers[8].height = 8;

    barriers[9].x = 164;
    barriers[9].y = 50;
    barriers[9].width = 325;
    barriers[9].height = 8;

    barriers[10].x = 120;
    barriers[10].y = 150;
    barriers[10].width = 40;
    barriers[10].height = 8;

    barriers[11].x = 490;
    barriers[11].y = 85;
    barriers[11].width = 50;
    barriers[11].height = 8;

    barriers[27].x = 533;
    barriers[27].y = 270;
    barriers[27].width = 50;
    barriers[27].height = 8;

    //V
    barriers[12].x = 115;
    barriers[12].y = 160;
    barriers[12].width = 8;
    barriers[12].height = 235;

    barriers[13].x = 590;
    barriers[13].y = 203;
    barriers[13].width = 8;
    barriers[13].height = 155;

    barriers[14].x = 545;
    barriers[14].y = 90;
    barriers[14].width = 8;
    barriers[14].height = 120;

    barriers[15].x = 490;
    barriers[15].y = 350;
    barriers[15].width = 8;
    barriers[15].height = 70;

    barriers[16].x = 150;
    barriers[16].y = 390;
    barriers[16].width = 8;
    barriers[16].height = 30;

    barriers[17].x = 150;
    barriers[17].y = 60;
    barriers[17].width = 8;
    barriers[17].height = 98;

    barriers[18].x = 260;
    barriers[18].y = 55;
    barriers[18].width = 8;
    barriers[18].height = 60;

    barriers[19].x = 205;
    barriers[19].y = 55;
    barriers[19].width = 8;
    barriers[19].height = 110;

    barriers[20].x = 305;
    barriers[20].y = 122;
    barriers[20].width = 8;
    barriers[20].height = 50;

    barriers[21].x = 475;
    barriers[21].y = 170;
    barriers[21].width = 8;
    barriers[21].height = 80;

    barriers[22].x = 450;
    barriers[22].y = 290;
    barriers[22].width = 8;
    barriers[22].height = 80;

    barriers[23].x = 350;
    barriers[23].y = 220;
    barriers[23].width = 8;
    barriers[23].height = 160;

    barriers[24].x = 180;
    barriers[24].y = 270;
    barriers[24].width = 8;
    barriers[24].height = 60;

    barriers[25].x = 255;
    barriers[25].y = 165;
    barriers[25].width = 8;
    barriers[25].height = 60;

    barriers[26].x = 490;
    barriers[26].y = 50;
    barriers[26].width = 8;
    barriers[26].height = 35;

    // Grosses Barrières 
    barriers[28].x = 553;
    barriers[28].y = 7;
    barriers[28].width = 200;
    barriers[28].height = 200;

    barriers[29].x = 553;
    barriers[29].y = 0;
    barriers[29].width = 200;
    barriers[29].height = 200;

    barriers[30].x = 550;
    barriers[30].y = -20;
    barriers[30].width = 200;
    barriers[30].height = 200;

    barriers[31].x = 595;
    barriers[31].y = 50;
    barriers[31].width = 500;
    barriers[31].height = 500;

    barriers[32].x = 495;
    barriers[32].y = 355;
    barriers[32].width = 200;
    barriers[32].height = 200;

    barriers[33].x = 150;
    barriers[33].y = 420;
    barriers[33].width = 500;
    barriers[33].height = 200;

    barriers[34].x = 0;
    barriers[34].y = 420;
    barriers[34].width = 500;
    barriers[34].height = 200;

    barriers[35].x = 0;
    barriers[35].y = 0;
    barriers[35].width = 115;
    barriers[35].height = 800;

    barriers[36].x = 0;
    barriers[36].y = 0;
    barriers[36].width = 900;
    barriers[36].height = 55;

    barriers[37].x = 495;
    barriers[37].y = 35;
    barriers[37].width = 200;
    barriers[37].height = 55;

    barriers[38].x = 100;
    barriers[38].y = 35;
    barriers[38].width = 55;
    barriers[38].height = 120;

    barriers[39].x = 100;
    barriers[39].y = 390;
    barriers[39].width = 55;
    barriers[39].height = 120;

    // Arbres1
    barriers[40].x = 540;
    barriers[40].y = 183;
    barriers[40].width = 12;
    barriers[40].height = 50;

    barriers[41].x = 525;
    barriers[41].y = 165;
    barriers[41].width = 40;
    barriers[41].height = 50;
    
    // Arbres2
    barriers[42].x = 195;
    barriers[42].y = 270;
    barriers[42].width = 20;
    barriers[42].height = 50;

    barriers[43].x = 200;
    barriers[43].y = 290;
    barriers[43].width = 10;
    barriers[43].height = 50;    
}

void initLevel(int level) {
    for (int i = 0; i < MAX_BARRIERS; i++) {
        barriers[i].x = 0;
        barriers[i].y = 0;
        barriers[i].width = 0;
        barriers[i].height = 0;
    }
    currentLevel = level;
    if (level == 1) {
        initBarriers();
    } else if (level == 2) {
        initLevel2Barriers();
    }
}

void drawBarriers(SDL_Renderer* renderer) {
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);

    if (currentLevel == 1) {
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 100); // rouge semi-transparent
        for (int i = 0; i <= 43; i++) {
            SDL_Rect rect = {barriers[i].x, barriers[i].y, barriers[i].width, barriers[i].height};
            SDL_RenderFillRect(renderer, &rect);
        }
    } else if (currentLevel == 2) {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0); // totalement transparent (non visible)
        for (int i = 44; i <= 60; i++) {
            SDL_Rect rect = {barriers[i].x, barriers[i].y, barriers[i].width, barriers[i].height};
            SDL_RenderFillRect(renderer, &rect);
        }
    }
}

void initLevel2Barriers() {
    // HORIZONTALES
    barriers[44].x = 130;
    barriers[44].y = 160;
    barriers[44].width = 40;
    barriers[44].height = 8;

    barriers[45].x = 130;
    barriers[45].y = 270;
    barriers[45].width = 40;
    barriers[45].height = 8;

    barriers[46].x = 440;
    barriers[46].y = 150;
    barriers[46].width = 40;
    barriers[46].height = 8;

    barriers[47].x = 390;
    barriers[47].y = 250;
    barriers[47].width = 40;
    barriers[47].height = 8;

    barriers[48].x = 390;
    barriers[48].y = 310;
    barriers[48].width = 40;
    barriers[48].height = 8;

    // VERTICALES
    barriers[49].x = 150;
    barriers[49].y = 100;
    barriers[49].width = 8;
    barriers[49].height = 70;

    barriers[50].x = 150;
    barriers[50].y = 200;
    barriers[50].width = 8;
    barriers[50].height = 100;

    barriers[51].x = 150;
    barriers[51].y = 320;
    barriers[51].width = 8;
    barriers[51].height = 50;

    barriers[52].x = 410;
    barriers[52].y = 100;
    barriers[52].width = 8;
    barriers[52].height = 130;

    // ARBRES & BORDURES
    barriers[53].x = 60;
    barriers[53].y = 480;
    barriers[53].width = 40;
    barriers[53].height = 60;

    barriers[54].x = 115;
    barriers[54].y = 490;
    barriers[54].width = 45;
    barriers[54].height = 60;

    barriers[55].x = 530;
    barriers[55].y = 20;
    barriers[55].width = 55;
    barriers[55].height = 55;

    // ROCHERS
    barriers[56].x = 610;
    barriers[56].y = 270;
    barriers[56].width = 25;
    barriers[56].height = 25;

    barriers[57].x = 650;
    barriers[57].y = 290;
    barriers[57].width = 15;
    barriers[57].height = 15;

    // ÉTANG AU CENTRE
    barriers[58].x = 308;
    barriers[58].y = 1;
    barriers[58].width = 28;
    barriers[58].height = 80;

    // BORDS GAUCHE & DROITE
    barriers[59].x = 0;
    barriers[59].y = 0;
    barriers[59].width = 110;
    barriers[59].height = 500;

    barriers[60].x = 590;
    barriers[60].y = 0;
    barriers[60].width = 120;
    barriers[60].height = 600;
}