#include <stdio.h>

int main() {
    int numbers[5];   // M?ng �? l�u 5 s? nguy�n
    int sumOdd = 0;   

    // Y�u c?u ng�?i d�ng nh?p v�o 5 s? nguy�n
    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Ki?m tra n?u s? l� l?, c?ng v�o t?ng
        if (numbers[i] % 2 != 0) {
            sumOdd += numbers[i];
        }
    }

    // In k?t qu? t?ng c�c s? l?
    printf("Tong cac so le trong cac so da nhap la: %d\n", sumOdd);

    return 0;
}

