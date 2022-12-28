#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
    int graphdriver = DETECT, graphmode, errorcode;
    int i;
    int x2, y2, x1, y1, x, y, xn, yn;
    double r11, r12, r21, r22, th;
    printf("Enter the 2 line end points:");
    printf("x1,y1,x2,y2");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    printf("Enter the angle");
    scanf("%lf", &th);
    initgraph(&graphdriver, &graphmode, NULL);
    line(x1, y1, x2, y2);
    r11 = cos((th * 3.1428) / 180);
    r12 = sin((th * 3.1428) / 180);
    r21 = (-sin((th * 3.1428) / 180));
    r22 = cos((th * 3.1428) / 180);
    xn = ((x2 * r11) - (y2 * r12));
    yn = ((x2 * r12) + (y2 * r11));
    line(x1, y1, xn, yn);
    getch();
    closegraph();
}