#include<stdio.h>

int num;

int main(){
    printf("Enter your score: ");
    scanf("%d", &num);
    if (num >= 50) {
        printf("Congratulations! You passed");
    }
        else {
        printf("Please try again.");
    }
    return 0;
}