#include <stdio.h>

int main() 
    int i; 
    int arr[5];
    int x = 0;
    int y = 10;
    int result;

    
    for (i = 0; i <= 5; i++) 
    {
        arr[i] = i * 2; 
    }

   
    if (x == 0)
    {
        result = y / x; 
        printf("Result: %d\n", result);
    }

    
    goto end;

    printf("This line will be skipped\n");

end:
    return 0;
}
