#include <stdio.h>

int main() {
    int number;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("So %d là so duong.\n", number);
    } else if (number < 0) {
        printf("So %d là so am.\n", number);
    } else {
        printf("So ban nhap là so không.\n");
    }

    return 0;
}
