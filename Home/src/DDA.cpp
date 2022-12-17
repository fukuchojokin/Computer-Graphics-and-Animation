#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>
#include <stdlib.h>
int main()
{
    int gdriver = DETECT, gmode;
    int x1, x2, y1, y2, i, step, xn, yn, dx, dy;
    printf("Enter x1,y1: ");
    scanf("%d,%d", &x1, &y1);
    printf("Enter x2,y2: ");
    scanf("%d,%d", &x2, &y2);
    // char data[] = "C:\\MinGW\\lib\\libbgi.a";
    // initgraph(&gdriver, &gmode, data);
    initgraph(&gdriver, &gmode, NULL);
    dx = x2 - x1;
    dy = y2 - y1;
    if (abs(dx) > abs(dy))
        step = abs(dx);
    else
        step = abs(dy);
    xn = dx / step;
    yn = dy / step;
    for (i = 1; i <= step; i++)
    {
        putpixel(x1, y1, LIGHTBLUE);
        delay(100);
        x1 += xn;
        y1 += yn;
    }
    getch();
    closegraph();
}