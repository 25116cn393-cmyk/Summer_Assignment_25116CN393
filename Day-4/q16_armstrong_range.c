#include <stdio.h>

int main() {
    int start, end;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers are:\n");

    for (int num = start; num <= end; num++) {
        int temp = num;
        int sum = 0;
        int digit;

        while (temp > 0) {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}