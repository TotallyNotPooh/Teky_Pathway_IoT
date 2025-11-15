#include<stdio.h>

#define num_students 10
float scores[num_students];
float scores_above_avg = 0;


int main() {
    float total = 0;
//tt 1, 2, 3, 4
    for (int i=0; i<num_students; i++) {
        printf("Nhap diem: ");
        scanf("%f", &scores[i]);
        total += scores[i];
    }
//    printf("Total: %.2f\n", total);
    float avg = total / num_students;
    printf("Average: %.2f\n", avg);
//max    
    float min = scores[0];
    float max = scores[0];
    for (int i=1; i<num_students; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }
    printf("Highest score: %.2f\n", max);
    printf("Lowest score: %.2f\n", min);

//Dem so diem tren trung binh
    for (int i=1; i<num_students; i++) {
        if (scores[i] > avg){
            scores_above_avg++;
        };
    }
    printf("Scores that are above average: %.2f\n", scores_above_avg);


    return 0;
}
