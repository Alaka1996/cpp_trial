#include <stdio.h>

int get_array_value(int *arr, int len, int idx) {
    if (idx >= 0 && idx < len) {
        return arr[idx];
    }
    return -1;
}

int main() {
    int my_array[3] = {10, 20, 30};
    int *ptr = NULL;
    int index = 3;

   
    int value1 = get_array_value(my_array, 3, index);
    printf("Value1: %d\n", value1);

    
    int value2 = get_array_value(ptr, 3, 1);
    printf("Value2: %d\n", value2);

    return 0;
}
