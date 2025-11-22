#include<stdio.h>
int score;

int main(){
    printf("Enter your score: ");
    scanf("%d", &score);
    if ((score >= 85) && (score <= 100)) {
        printf("A");
    } 
        else if (score >= 70) {
        printf("B");
    } 
        else if (score >= 50) {
        printf("C");
    } 
        else {
        printf("D");
    }
    return 0;
}