#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void Bresenham(int x1, int y1, int x2, int y2) {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, NULL);
    int dx = x2 - x1;
    int dy = y2 - y1;
    int p = 2*dy - dx;
    int i = 0;
    while (i <= dx) {
        putpixel(x1, y1, WHITE);
        if (p < 0) {
            x1 += 1;
            p += 2*dy;
        } else {
            x1 += 1;
            y1 += 1;
            p += 2*(dy - dx);
        }
        i++;
    }
    getch();
    closegraph();
}

int main() {
    Bresenham(20, 20, 90, 90);
}