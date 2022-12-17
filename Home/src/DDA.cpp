#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>

void DDA(int x1, int y1, int x2, int y2) {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, NULL);
    int dx = x2 - x1;
    int dy = y2 - y1;
    int step = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    int xn = dx / step;
    int yn = dy / step;
    for (int i = 1; i <= step; i++) {
        putpixel(x1, y1, WHITE);
        x1 += xn;
        y1 += yn;
    }
    getch();
    closegraph();
}

int main() {
    DDA(20,20, 90,90); 
}