#include <stdio.h>

void foo(int x) {
        x = 10;
    }

    int main() {
        int x = 3;  
        foo(x);
       
        printf("%d\n", x);
        return 0;
    }
    