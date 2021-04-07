#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//ВАРИАНТ 7

#define n 200

int main() {
    srand (time(NULL));
    int s = 0, k = 0, j = 0;
    int mass[n];
    for (int i = 0; i < n; i++) {
        mass[i] = rand() % (10 - (-10) + 1) - 10;
        printf (" %d\n", mass[i]);
    }

    for (int i = 0; i < n; i++) {
        if (mass[i] > 0) {
            k++; //счётчик длины отрезков
            if (mass[i - 1] <= 0) {
                s++; //счётчик участков положительных чисел
            }
        }
    }

    printf("aver = %.1f, k = %d, s = %d", (float)k / (float)s, k, s);

    return 0;
}
