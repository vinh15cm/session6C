#include <stdio.h>
#include <string.h>

int main() {
    char password[20] = "123456";  // M?t kh?u cho tr�?c
    char input[20];                // M?t kh?u ng�?i d�ng nh?p

    printf("Nhap mat khau: ");
    scanf("%s", input);

    if (strcmp(password, input) == 0) {
        printf("Mat khau dung!\n");
    } else {
        printf("Mat khau sai!\n");
    }

    return 0;
}

