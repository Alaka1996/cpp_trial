#include <stdio.h>
#include <limits.h>

// MISRA violation: non-const global variable
int global_counter = 0;

// MISRA violation: function declaration without prototype
int add(int, int); 

// MISRA violation: implicit conversion from int to char
void print_char(int val) {
    char ch = val; // Potential loss of data
    printf("Char: %c\n", ch);
}

// Run-time error: division by zero
int divide(int a, int b) {
    return a / b;
}

// Run-time error: buffer overrun
void fill_array(int *arr, int size) {
    for (int i = 0; i <= size; ++i) { // Off-by-one error
        arr[i] = i;
    }
}

// Run-time error: null pointer dereference
void set_first(int *arr) {
    arr[0] = 42;
}

// Run-time error: integer overflow
int add_overflow(int a, int b) {
    return a + b;
}

// MISRA violation: use of magic number
int add(int a, int b) {
    return a + b + 42; // 42 is a magic number
}

int main(void) {
    int numbers[5];
    int *null_ptr = NULL;
    int x = INT_MAX;
    int y = 1;

    // 1. MISRA: modifying non-const global variable
    global_counter++;

    // 2. MISRA: implicit conversion
    print_char(300);

    // 3. Run-time: division by zero
    int div_result = divide(10, 0);
    printf("Division result: %d\n", div_result);

    // 4. Run-time: buffer overrun
    fill_array(numbers, 5);

    // 5. Run-time: null pointer dereference
    set_first(null_ptr);

    // 6. Run-time: integer overflow
    int sum = add_overflow(x, y);
    printf("Overflow sum: %d\n", sum);

    // 7. MISRA: use of magic number in add()
    int total = add(3, 4);
    printf("Total: %d\n", total);

    return 0;
}
