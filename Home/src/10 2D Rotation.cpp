#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <stdio.h>
void rotate2D(int x2, int y2, int x1, int y1, int th) {
    double r11, r12, r21, r22;
    line(x1, y1, x2, y2);
    r11 = cos((th * 3.1428) / 180);
    r12 = sin((th * 3.1428) / 180);
    r21 = (-sin((th * 3.1428) / 180));
    r22 = cos((th * 3.1428) / 180);
    int xn = ((x2 * r11) - (y2 * r12));
    int yn = ((x2 * r12) + (y2 * r11));
    line(x1, y1, xn, yn);
    getch();
}

int main() {
    int graphdriver = DETECT, graphmode, errorcode;
    initgraph(&graphdriver, &graphmode, NULL);
    rotate2D(200, 200, 200, 300, 15);
    closegraph();
}