#include <stdio.h>

int main() {
    int number;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("So %d l� so duong.\n", number);
    } else if (number < 0) {
        printf("So %d l� so am.\n", number);
    } else {
        printf("So ban nhap l� so kh�ng.\n");
    }

    return 0;
}
