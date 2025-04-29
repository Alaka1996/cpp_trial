#include <stdio.h>

int get_value(int *arr, int size, int idx) {
    // No check for arr == NULL (null pointer)
    // No check for idx out of bounds (buffer overrun)
    return arr[idx];
}

int divide(int a, int b) {
    // No check for b == 0 (division by zero)
    return a / b;
}

int main(void) {
    int numbers[3] = {1, 2, 3};
    int *null_ptr = NULL;

    // Buffer overrun: idx is out of bounds
    int x = get_value(numbers, 3, 5);

    // Null pointer dereference
    int y = get_value(null_ptr, 3, 1);

    // Division by zero
    int z = divide(10, 0);

    printf("%d %d %d\n", x, y, z);

    return 0;
}
