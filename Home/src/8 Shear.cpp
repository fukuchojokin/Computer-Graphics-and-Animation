#include <conio.h>
#include <graphics.h>
#include <stdio.h>
int main() {
    int gd = DETECT, gm;
    int x, y, x1, y1, x2, y2, x3, y3, shear_f;
    printf("Enter first coordinate: ");
    scanf("%d %d", &x, &y);
    printf("Enter second coordinate: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter third coordinate: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter last coordinate: ");
    scanf("%d %d", &x3, &y3);
    printf("Enter shearing factor x = ");
    scanf("%d", &shear_f);
    initgraph(&gd, &gm, NULL);
    cleardevice();
    line(x, y, x1, y1);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x, y);
    setcolor(RED);
    x = x + y * shear_f;
    x1 = x1 + y1 * shear_f;
    x2 = x2 + y2 * shear_f;
    x3 = x3 + y3 * shear_f;
    line(x, y, x1, y1);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x, y);
    getch();
    closegraph();
}