#include <stdio.h>
int main() {
    float bs, da, ta, hra, ts;
    printf("Enter Basic Salary: ");
    scanf("%f", &bs);

    if (bs < 35000) {
        da = 0.03 * bs;
        ta = 0.02 * bs;
        hra = 0.04 * bs;
    }
    else if (bs >= 35000 && bs < 80000) {
        da = 0.04 * bs;
        ta = 0.03 * bs;
        hra = 0.05 * bs;
    }
    else {da = 0.05 * bs;
        ta = 0.04 * bs;
        hra = 0.07 * bs;
    }
    ts =bs+da+ta-hra;

    printf("\nBasic Salary: %f", bs);
    printf("\nDA: %f", da);
    printf("\nTA: %f", ta);
    printf("\nHRA: %f", hra);
    printf("\nTotal Salary: %f\n", ts);

    return 0;
}
