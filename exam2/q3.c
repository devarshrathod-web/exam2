#include <stdio.h>

int main() {
    int num1 = 100, num2 = 9;

    do {
        printf("%d %d ", num1, num2);
        num1 -= 10;
        num2--;
    } while (num1 >= 20 && num2 >= 1);

    printf("\n");
    return 0;
}
