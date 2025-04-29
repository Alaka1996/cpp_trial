#include <stdio.h>

int main(void) {
    int arr[5];
    int i;

    // Orange: possible buffer overflow (depends on user input)
    printf("Enter an index: ");
    scanf("%d", &i); // i can be any value
    arr[i] = 10;     // Possible buffer overflow if i < 0 or i > 4

    printf("%d\n", arr[i]);

    // Red: definite buffer overflow
    arr[5] = 20; // Index 5 is out-of-bounds (valid: 0-4)

    // Red: definite division by zero
    int a = 10, b = 0;
    int c = a / b; // Always division by zero

    // Orange: possible division by zero (depends on user input)
    printf("Enter a divisor: ");
    scanf("%d", &b);
    int d = a / b;

    // Red: null pointer dereference
    int *ptr = NULL;
    *ptr = 100;

    // Grey: unreachable code
    if (0) {
        arr[0] = 123;
    }

    return 0;
}
