#include <stdio.h> 
 
int main() { 
    int x=0, y=0, *px, *py; 
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    printf("x value: %d\n", x);
    printf("y value: %d\n", y);
    printf("arr[0] value: %d\n", arr[0]);
    printf("address of x: %p\n", &x);
    printf("address of y: %p\n", &y);

    px = &x;
    py = &y;

    printf("address of *px: %p\n", px);
    printf("address of *py: %p\n", py);

    printf("array: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", *(arr + i));
    }

    printf("\nprint \"arr\": %p \n", arr);
    printf("address of arr[0]: %p \n", &arr[0]);

    printf("address of arr: %p \n", &arr);
    return 0; 

} 