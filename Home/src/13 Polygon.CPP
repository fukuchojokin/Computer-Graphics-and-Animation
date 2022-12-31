#include <conio.h>
#include <graphics.h>
#include <stdio.h>
void polygon(int poly[]) {
    drawpoly(5, poly);
    getch();
}

int main() {
    int poly[] = {20, 100, 120, 140, 240, 260, 120, 320, 20, 100};
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, NULL);
    polygon(poly);
    closegraph();
}