#include <conio.h>
#include <direct.h>
#include <graphics.h>
#include <math.h>
#include <stdio.h>
int main() {
    int rcode_begin[4] = {0, 0, 0, 0}, rcode_end[4] = {0, 0, 0, 0},
        region_code[4];
    int W_xmax = 400, W_ymax = 400, W_xmin = 50, W_ymin = 50, flag = 0;
    float slope;
    int x = 10, y = 10, x1 = 275, y1 = 275, i, xc, yc;
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, NULL);
    rectangle(W_xmin, W_ymin, W_xmax, W_ymax);
    line(x, y, x1, y1);
    // line(0, 0, 600, 0);
    // line(0, 0, 0, 600);
    if (y > W_ymax) {
        rcode_begin[0] = 1;
        flag = 1;
    }
    if (y < W_ymin) {
        rcode_begin[1] = 1;
        flag = 1;
    }
    if (x > W_xmax) {
        rcode_begin[2] = 1;
        flag = 1;
    }
    if (x < W_xmin) {
        rcode_begin[3] = 1;
        flag = 1;
    }
    if (y1 > W_ymax) {
        rcode_end[0] = 1;
        flag = 1;
    }
    if (y1 < W_ymin) {
        rcode_end[1] = 1;
        flag = 1;
    }
    if (x1 > W_xmax) {
        rcode_end[2] = 1;
        flag = 1;
    }
    if (x1 < W_xmin) {
        rcode_end[3] = 1;
        flag = 1;
    }
    if (flag == 0) {
        printf("No need of clipping as it is already in window\n");
    }
    flag = 1;
    for (i = 0; i < 4; i++) {
        region_code[i] = rcode_begin[i] && rcode_end[i];
        if (region_code[i] == 1) flag = 0;
    }
    if (flag == 0) {
        printf("Line is completely outside the window\n");
    } else {
        slope = (float)(y1 - y) / (x1 - x);
        if (rcode_begin[2] == 0 && rcode_begin[3] == 1) {
            y = y + (float)(W_xmin - x) * slope;
            x = W_xmin;
        }
        if (rcode_begin[2] == 1 && rcode_begin[3] == 0) {
            y = y + (float)(W_xmax - x) * slope;
            x = W_xmax;
        }
        if (rcode_begin[0] == 1 && rcode_begin[1] == 0) {
            x = x + (float)(W_ymax - y) / slope;
            y = W_ymax;
        }
        if (rcode_begin[0] == 0 && rcode_begin[1] == 1) {
            x = x + (float)(W_ymin - y) / slope;
            y = W_ymin;
        }

        if (rcode_end[2] == 0 && rcode_end[3] == 1) {
            y1 = y1 + (float)(W_xmin - x1) * slope;
            x1 = W_xmin;
        }
        if (rcode_end[2] == 1 && rcode_end[3] == 0) {
            y1 = y1 + (float)(W_xmax - x1) * slope;
            x1 = W_xmax;
        }
        if (rcode_end[0] == 1 && rcode_end[1] == 0) {
            x1 = x1 + (float)(W_ymax - y1) / slope;
            y1 = W_ymax;
        }
        if (rcode_end[0] == 0 && rcode_end[1] == 1) {
            x1 = x1 + (float)(W_ymin - y1) / slope;
            y1 = W_ymin;
        }
    }
    getch();
    clearviewport();
    rectangle(W_xmin, W_ymin, W_xmax, W_ymax);
    // line(0, 0, 600, 0);
    // line(0, 0, 0, 600);
    setcolor(CYAN);
    line(x, y, x1, y1);
    getch();
    closegraph();
}