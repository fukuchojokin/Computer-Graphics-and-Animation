
#include <conio.h>
#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
void polygon(int poly[]) {
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, NULL);
    drawpoly(5, poly);
    getch();
    closegraph();
}

int main() {
    int poly[] = {20, 100, 120, 140, 240, 260, 120, 320, 20, 100};
    polygon(poly);
}