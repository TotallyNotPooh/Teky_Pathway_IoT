#include <stdio.h>

int main() {
    int a;
    int b;
    int number = 10;
    for( int a = 1; a < number; a++) {
        printf("Bang cuu chuong %d:\n", a);
        for( int b = 1; b <= number; b++){
            printf("%d * %d = %d\n", a, b, a * b);
        }
        printf("\n");
    }
    return 0;
}
