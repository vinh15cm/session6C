#include <stdio.h>

int main() {
    int numbers[5];
    int countEven = 0, countOdd = 0;

    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }

    printf("So luong so chan: %d\n", countEven);
    printf("So luong so le: %d\n", countOdd);

    return 0;
}

