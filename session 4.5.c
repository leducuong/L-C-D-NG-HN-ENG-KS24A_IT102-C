#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Nhap vao so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &num2);
    printf("Nhap vao so thu ba: ");
    scanf("%d", &num3);

    if ((num3 >= num1 && num3 <= num2) || (num3 >= num2 && num3 <= num1)) {
        printf("So %d nam trong khoang giua %d v� %d.\n", num3, num1, num2);
    } else {
        printf("So %d kh�ng nam trong khoang giua %d v� %d.\n", num3, num1, num2);
    }

    return 0;
}
