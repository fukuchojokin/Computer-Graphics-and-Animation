#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <graphics.h>

void plots(int x, int y, int x1, int y1) {
    putpixel(x + x1, y + y1, YELLOW);
    putpixel(x + x1, y - y1, YELLOW);
    putpixel(x + x1, y - y1, YELLOW);
    putpixel(x - x1, y - y1, YELLOW);
    putpixel(x + y1, y + x1, YELLOW);
    putpixel(x - y1, y + x1, YELLOW);
    putpixel(x + y1, y - x1, YELLOW);
    putpixel(x - y1, y - x1, YELLOW);
}

int main() {
    int gdriver = DETECT, gmode;
    int xc, yc, x, y;
    float p, r;
    printf("Enter center coordinates: ");
    scanf("%d,%d", &xc, &yc);
    printf("Enter the radius: ");
    scanf("%f", &r);
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