// Program for Bezier curve:
#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void bezier(int x[4], int y[4]) {
    int gd = DETECT, gm;
    int i;
    double t;
    initgraph(&gd, &gm, NULL);
    for (t = 0.0; t < 1.0; t += 0.0005) {
        double xt = pow(1 - t, 3) * x[0] + 3 * t * pow(1 - t, 2) * x[1] +
                    3 * pow(t, 2) * (1 - t) * x[2] + pow(t, 3) * x[3];
        double yt = pow(1 - t, 3) * y[0] + 3 * t * pow(1 - t, 2) * y[1] +
                    3 * pow(t, 2) * (1 - t) * y[2] + pow(t, 3) * y[3];
        putpixel(xt, yt, WHITE);
    }
    for (i = 0; i < 4; i++) putpixel(x[i], y[i], YELLOW);
    getch();
    closegraph();
}
int main() {
    int x[4] = {200, 300, 300, 400};
    int y[4] = {300, 300, 200, 100};
    bezier(x, y);
}