#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <stdio.h>

void translate(int x1, int x2, int x3, int y1, int y2, int y3, int xt, int yt) {
    setcolor(YELLOW);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    x1 += xt; y1 += yt;
    x2 += xt; y2 += yt;
    x3 += xt; y3 += yt;
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    getch();
}

void rotate(int x1, int x2, int x3, int y1, int y2, int y3, int r) {
    setcolor(YELLOW);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    float t = 3.14 * r / 180;
    x1 = abs(x1 * cos(t) - y1 * sin(t)); y1 = abs(x1 * sin(t) + y1 * cos(t)); 
    x2 = abs(x2 * cos(t) - y2 * sin(t)); y2 = abs(x2 * sin(t) + y2 * cos(t));
    x3 = abs(x3 * cos(t) - y3 * sin(t)); y3 = abs(x3 * sin(t) + y3 * cos(t));
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    getch();
}

void scale(int x1, int x2, int x3, int y1, int y2, int y3, int sx, int sy) {
    setcolor(YELLOW);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    x1 *= sx; y1 *= sy;
    x2 *= sx; y2 *= sy;
    x3 *= sx; y3 *= sy;
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    getch();
}

int main() {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, NULL);
    translate(100, 10, 10, 200, 50, 200, 20, 20);
    cleardevice();
    rotate(100, 10, 10, 200, 50, 200, 50);
    cleardevice();
    scale(100, 10, 10, 200, 50, 200, 2, 2);
    closegraph();
}
