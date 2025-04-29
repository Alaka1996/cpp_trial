#include <stdio.h>
#include <string.h>

// MISRA violation: Use of magic numbers, implicit int (no type for function), no prototypes
foo(a, b)
{
    int arr[5];
    arr[5] = 10; // Buffer overflow: writing out of bounds
    return a / b; // Division by zero possible
}

int main() {
    int x = 10;
    int y = 0;
    int i;

    // MISRA violation: implicit conversion from int to char
    char ch = 300; 

    // MISRA violation: use of ++ in loop condition
    for (i = 0; i++ < 5;) {
        printf("Hello %d\n", i);
    }

    // MISRA violation: no braces for if
    if (x > 5)
        printf("X is large\n");

    // MISRA violation: use of strcpy (unsafe), magic numbers
    char buf[4];
    strcpy(buf, "abcd"); // Buffer overflow

    printf("%d\n", foo(x, y)); // Division by zero

    return 0;
}
