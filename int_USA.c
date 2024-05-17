// int형 변수 USA
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = (int *)malloc(sizeof(int));
    *a = 1234;
    
    printf("a pointer: %p\n", a);
    printf("a: %d\n", *a);
    printf("\n");

    free(a);

    int *b = (int *)malloc(sizeof(int));
    
    *b = 5678;
    *a = 12345678;

    printf("b pointer: %p\n", b);

    printf("b: %d\n", *a);

    
    free(b);
    
    return 0;
}