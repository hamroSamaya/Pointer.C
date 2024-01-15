#include <stdio.h>

void foo(int *ptrX) { /* Parameter not same as local variable */
        *ptrX = 10;  /*/Dereference the pointer */
    }

    int main() {
        int x = 3;  /* Local variable declaration */
        foo(&x); /* &x is a pointer to x of type int * */
        /* What gets printed? */
        printf("%d\n", x);
    }