#include <stdio.h>

int main() // MISRA: function should have explicit return type and parameters should be specified
{
    int i; // MISRA: variable not initialized
    int arr[5];
    int x = 0;
    int y = 10;
    int result;

    // Buffer overflow: writing beyond the bounds of arr
    for (i = 0; i <= 5; i++) // MISRA: should use <, not <=
    {
        arr[i] = i * 2; // When i == 5, arr[5] is out of bounds
    }

    // Division by zero
    if (x == 0)
    {
        result = y / x; // Division by zero
        printf("Result: %d\n", result);
    }

    // MISRA violation: use of goto
    goto end;

    printf("This line will be skipped\n");

end:
    return 0;
}
