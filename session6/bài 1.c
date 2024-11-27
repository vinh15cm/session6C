#include <stdio.h>

int main() {
    int numbers[5];   // M?ng ð? lýu 5 s? nguyên
    int sumOdd = 0;   

    // Yêu c?u ngý?i dùng nh?p vào 5 s? nguyên
    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Ki?m tra n?u s? là l?, c?ng vào t?ng
        if (numbers[i] % 2 != 0) {
            sumOdd += numbers[i];
        }
    }

    // In k?t qu? t?ng các s? l?
    printf("Tong cac so le trong cac so da nhap la: %d\n", sumOdd);

    return 0;
}

