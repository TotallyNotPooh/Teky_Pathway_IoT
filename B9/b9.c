#include<stdio.h>

#define num_students 5
float scores[num_students];
int main() {
    float totalscores = 0;
//tt 1, 2, 3, 4
    for (int i=0; i<num_students; i++) {
        printf("Nhap diem: ");
        scanf("%f", &scores[i]);
        totalscores += scores[i];
    }
    printf("Total: %.2f\n", totalscores);
    float avg = totalscores / num_students;
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

//tt 6
    for(int i=0; i<num_students - 1; i++) {
        for (int j=i+1; j<num_students; j++) {
            if (scores[i] > scores[j]) {
                float temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        for(int i=0; i<num_students; i++) {
            printf("Mang da sap xep: %.2f\n", scores[i]);
        }

        }
    }


    return 0;
}
