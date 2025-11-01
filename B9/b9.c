#include<stdio.h>

#define num_students 5;
float scores[5];
int main() {
    float totalscores = 0;

    for (int i=0; i<5; i++) {
        printf("Nhap diem: ");
        scanf("%f", &scores[i]);
        totalscores += scores[i];
    }
    printf("Total: %.2f\n", totalscores);
    float avg = totalscores / num_students;
    printf("Average: %.2f\n", avg);
    return 0;
}
