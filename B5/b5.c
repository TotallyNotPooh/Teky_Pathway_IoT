#include <stdio.h>

int main() {
    int number;
    printf("Nhap vao mot so: ");
    scanf("%d", &number);

    for( int i = 0; i < number; i++) {
        printf("%d\n", i);
    }
    printf("Completed");
    return 0;
}