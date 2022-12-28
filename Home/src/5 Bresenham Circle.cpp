#include <conio.h>
#include <graphics.h>
#include <stdio.h>
void BresenhamCircle(int xc, int yc, int r) {
    int gdriver = DETECT, gmode;
    int x, y, d;
    initgraph(&gdriver, &gmode, NULL);
    d = 3 - 2 * r;
    x = 0;
    y = r;
    while (x <= y) {
        putpixel(x + xc, y + yc, YELLOW);
        putpixel(x + xc, -y + yc, YELLOW);
        putpixel(-x + xc, -y + yc, YELLOW);
        putpixel(-x + xc, y + yc, YELLOW);
        putpixel(y + xc, x + yc, YELLOW);
        putpixel(y + xc, -x + yc, YELLOW);
        putpixel(-y + xc, -x + yc, YELLOW);
        putpixel(-y + xc, x + yc, YELLOW);
        if (d <= 0) {
            x = x + 1;
            d = d + 4 * x + 6;
        } else {
            x = x + 1;
            y = y - 1;
            d = d + 4 * (x - y) + 10;
        }
    }
    getch();
    closegraph();
}

int main() { BresenhamCircle(200, 200, 50); }