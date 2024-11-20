#include <stdio.h>
int main() {
    int size, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);

     
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }

    printf("The sum of all odd values in the array is: %d\n", sum);
    return 0;
}
