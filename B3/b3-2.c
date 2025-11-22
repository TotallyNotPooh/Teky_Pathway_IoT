#include<stdio.h>
int a;
int b;


int main(){
    printf("Please enter first number:");
    scanf("%d", &a);
    
    fflush(stdin);
    printf("Please enter second number:");
    scanf("%d", &b);

    int x = ((a > 0) && (b > a));

    printf("sum = %d\n", a + b);
    printf("difference = %d\n", a - b);
    printf("product = %d\n", a * b);
    printf("division = %d\n", a / b);
    printf("division with remainders = %d\n", a % b);
    printf("(1 if true 0 if false): %d", x);
    return 0;
}