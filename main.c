#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int ary1[10];
    printf("array1\n");
    for (int i = 0; i<10; i++){
        ary1[i] = rand() % 100;
        printf("ary1[%d]: %d\n", i, ary1[i]);
    }
    int ary2[10];
    int * pointy1 = ary1 + 9;
    int * pointy2 = ary2;
    printf("\narray2\n");
    for (int i = 0; i<10; i++){
        *(pointy2 + i) = *(pointy1 - i);
        printf("ary2[%d]: %d\n", i, *(pointy2 + i));
    }
    
    return 0;
}