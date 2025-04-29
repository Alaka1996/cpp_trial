#include <stdio.h>

int divide(int a, int b) {
    // Potential division by zero if b == 0
    return a / b;
}

void fill_array(int *arr, int size) {
    for (int i = 0; i <= size; ++i) { // Off-by-one error: should be i < size
        arr[i] = i;
    }
}

int main() {
    int numbers[5];
    int x = 10;
    int y = 0;

    // 1. Division by zero
    int result = divide(x, y);
    printf("Result: %d\n", result);

    // 2. Off-by-one buffer overrun
    fill_array(numbers, 5);

    return 0;
}
