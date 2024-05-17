// function pointer USA
#include <stdio.h>
#include <stdlib.h>

typedef void (*fp)();

void hello() {
    printf("Hello\n");
}

void world() {
    printf("World\n");
}

int main() {
    fp *func1 = malloc(sizeof(fp));
    *func1 = hello;
    (*func1)();

    free(func1);
    fp *func2 = malloc(sizeof(fp));
    *func2 = world;
    *func1 = hello;

    (*func2)();
    free(func2);
    return 0;
}