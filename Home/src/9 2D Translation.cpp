#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void translate(int x1, int y1, int x2, int y2, int x, int y) {
    int graphdriver = DETECT, graphmode, errorcode;
    initgraph(&graphdriver, &graphmode, NULL);
    line(x1, y1, x2, y2);
    x1 += x;
    y1 += y;
    x2 += x;
    y2 += y;
    printf("Line after translation");
    line(x1, y1, x2, y2);
    getch();
    closegraph();
}

int main() { translate(100, 100, 200, 200, 200, 200); }