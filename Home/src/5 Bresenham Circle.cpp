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
        putpixel(x + xc, y + yc, WHITE);
        putpixel(x + xc, -y + yc, WHITE);
        putpixel(-x + xc, -y + yc, WHITE);
        putpixel(-x + xc, y + yc, WHITE);
        putpixel(y + xc, x + yc, WHITE);
        putpixel(y + xc, -x + yc, WHITE);
        putpixel(-y + xc, -x + yc, WHITE);
        putpixel(-y + xc, x + yc, WHITE);
        if (d <= 0) {
            x++;
            d += 4 * x + 6;
        } else {
            x++;
            y--;
            d += 4 * (x - y) + 10;
        }
    }
    getch();
    closegraph();
}

int main() { BresenhamCircle(200, 200, 50); }