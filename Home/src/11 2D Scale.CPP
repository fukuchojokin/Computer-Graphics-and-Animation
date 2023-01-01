#include <conio.h>
#include <graphics.h>
#include <stdio.h>

void scale2D(int x1, int y1, int x2, int y2, int sx, int sy) {
    line(x1, y1, x2, y2);
    x1 = (x1 * sx);
    y1 = (y1 * sy);
    x2 = (x2 * sx);
    y2 = (y2 * sy);
    line(x1, y1, x2, y2);
    getch();
}
int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, NULL);
    scale2D(100, 100, 200, 100, 2, 2);
    closegraph();
}