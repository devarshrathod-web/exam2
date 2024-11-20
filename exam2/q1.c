#include <stdio.h>


int calculateSum() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int sum = calculateSum();
    printf("The sum of numbers from 1 to 10 is: %d\n", sum);
    return 0;
}
