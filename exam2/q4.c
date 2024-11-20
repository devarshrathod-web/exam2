#include <stdio.h>

int main() {
    for (int rows = 8; rows >= 1; rows--) {
        for (int cols = 8; cols >= 9 - rows; cols--) {
            printf("%d ", cols);
        }
        printf("\n");
    }
    return 0;
}
