#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void plots(int x, int y, int x1, int y1) {
    putpixel(x + x1, y + y1, WHITE);
    putpixel(x + x1, y - y1, WHITE);
    putpixel(x - x1, y + y1, WHITE);
    putpixel(x - x1, y - y1, WHITE);
    putpixel(x + y1, y + x1, WHITE);
    putpixel(x - y1, y + x1, WHITE);
    putpixel(x + y1, y - x1, WHITE);
    putpixel(x - y1, y - x1, WHITE);
}

void MidpointCircle(int xc, int yc, int r) {
    int x, y, gdriver = DETECT, gmode;
    float p;
    initgraph(&gdriver, &gmode, NULL);
    x = 0;
    y = r;
    p = 5 / 4 - r;
    do {
        plots(xc, yc, x, y);
        if (p < 0)
            p = p + 2 * x + 1;
        else {
            p = p + 2 * (x - y) + 1;
            y--;
        }
        x++;
    } while (x < y);
    if (x == y)
        plots(xc, yc, x, y);
    getch();
    closegraph();
}

int main() {
    MidpointCircle(200, 200, 50);
}