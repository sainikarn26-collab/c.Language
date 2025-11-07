#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;

    while (num != 0) {
        digits++;
        num /= 10;
    }

    num = original;
    while (num != 0) {
        int rem = num % 10;
        sum += pow(rem, digits);
        num /= 10;
    }

    return (sum == original);
}

int main() {
    printf("Armstrong numbers from 1 to 100 are:\n");
    for (int i = 1; i <= 100; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }
    return 0;
}
