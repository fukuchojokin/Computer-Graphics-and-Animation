#include <conio.h>
#include <graphics.h>
#include <stdio.h>

int main() {
    int gdriver = DETECT, gmode;
    char data[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gdriver, &gmode, data);
    line(100, 300, 200, 100);
    getch();
    closegraph();
}