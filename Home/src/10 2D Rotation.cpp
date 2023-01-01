#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <stdio.h>
void rotate2D(int x1, int y1, int x2, int y2, int r) {
    line(x1, y1, x2, y2);
    float t = 3.14 * r / 180;
    x2 = abs(x2 * cos(t) - y2 * sin(t));
    y2 = abs(x2 * sin(t) + y2 * cos(t));
    line(x1, y1, x2, y2);
    getch();
}

int main() {
    int graphdriver = DETECT, graphmode, errorcode;
    initgraph(&graphdriver, &graphmode, NULL);
    rotate2D(200, 200, 400, 200, 90);
    closegraph();
}