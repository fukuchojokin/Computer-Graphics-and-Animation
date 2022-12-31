#include <conio.h>
#include <graphics.h>
#include <stdio.h>
void shear(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3,
           int shear_f) {
    line(x, y, x1, y1);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x, y);
    x += y * shear_f;
    x1 += y1 * shear_f;
    x2 += y2 * shear_f;
    x3 += y3 * shear_f;
    line(x, y, x1, y1);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x, y);
    getch();
}

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, NULL);
    shear(100, 100, 200, 150, 50, 100, 50, 10, 2);
    closegraph();
}