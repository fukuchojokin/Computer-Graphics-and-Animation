#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include "graphics.h"
int main() {
    int gdriver = DETECT, gmode;
    int x, y, x1, y1, x2, y2, dx, dy, p, i, j;
    printf("Enter x1,y1: ");
    scanf("%d,%d", &x1, &y1);
    printf("Enter x2,y2: ");
    scanf("%d,%d", &x2, &y2);
    initgraph(&gdriver, &gmode, NULL);
    dx = x2 - x1;
    dy = y2 - y1;
    p = 2 * dy - dx;
    x = x1;
    y = y1;
    i = 0;
    while (i <= dx) {
        putpixel(x, y, RED);
        delay(100);
        if (p < 0) {
            x += 1;
            p = p + 2 * dy;
        } else {
            x += 1;
            y += 1;
            p = p + 2 * dy - 2 * dx;
        }
        i += 1;
    }
    getch();
    closegraph();
}