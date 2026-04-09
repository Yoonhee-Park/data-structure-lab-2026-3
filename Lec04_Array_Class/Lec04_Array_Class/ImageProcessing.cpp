#include "ImageProcessing.h"

int get_max_brightness(int img[HEIGHT][WIDTH]) {
    int maxVal = img[0][0];

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (img[i][j] > maxVal) {
                maxVal = img[i][j];
            }
        }
    }
    return maxVal;
}