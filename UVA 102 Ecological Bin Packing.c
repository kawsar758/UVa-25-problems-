#include <stdio.h>

int main() {
    int i, b[3], g[3], c[3], r[6], min;

    while (scanf("%d %d %d %d %d %d %d %d %d", &b[0], &g[0], &c[0], &b[1], &g[1], &c[1], &b[2], &g[2], &c[2]) != EOF) {
        r[0] = g[0] + c[0] + b[1] + g[1] + b[2] + c[2];
        r[1] = g[0] + c[0] + b[1] + c[1] + b[2] + g[2];
        r[2] = b[0] + g[0] + c[1] + g[1] + b[2] + c[2];
        r[3] = b[0] + g[0] + b[1] + c[1] + g[2] + c[2];
        r[4] = b[0] + c[0] + c[1] + g[1] + b[2] + g[2];
        r[5] = b[0] + c[0] + b[1] + g[1] + g[2] + c[2];

        min = r[0];

        for (i = 1; i < 6; i++) {
            if (r[i] < min) {
                min = r[i];
            }
        }

        if (min == r[0]) {
            printf("BCG");
        } else if (min == r[1]) {
            printf("BGC");
        } else if (min == r[2]) {
            printf("CBG");
        } else if (min == r[3]) {
            printf("CGB");
        } else if (min == r[4]) {
            printf("GBC");
        } else if (min == r[5]) {
            printf("GCB");
        }

        printf(" %d\n", min);
    }

    return 0;
}
