// create a file name it example.cpp or any other name with .cpp extension

#include "graphics.h"
int main()
{
    int gd = DETECT, gm;
    // char data[] = "C:\\MinGW\\lib\\libbgi.a";

    initgraph(&gd, &gm, NULL);
    // you can also pass NULL for third parameter if you did above setup successfully
    // example: initgraph(&gd, &gm, NULL);

    circle(200, 200, 100);
    getch();
    closegraph();
    return 0;
}