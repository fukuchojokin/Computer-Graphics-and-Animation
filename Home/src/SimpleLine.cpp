#include <stdio.h>
#include <conio.h>
#include "graphics.h"

int main()
{
    int gdriver = DETECT, gmode;
    // char data[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gdriver, &gmode, NULL);
    line(100, 300, 200, 100);
    getch();
    closegraph();
}