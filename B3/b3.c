#include<stdio.h>
#include<string.h>

int main() {
    int age;
    char name[20];
    float height;

    printf("Enter your name:");
    scanf("%s", &name);
    
    fflush(stdin);
    printf("Enter your age:");
    scanf("%d", &age);
    
    fflush(stdin);
    printf("Enter your height:");  
    scanf("%f", &height);
    
    printf("\n Your name: %s", name);
    printf("\n Your age: %d", age);
    printf("\n Your height: %f", height);
    return 0;
}