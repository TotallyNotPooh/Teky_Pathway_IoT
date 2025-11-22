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
    printf("Total of scores that are above average: %.2f\n", scores_above_avg);

//Sap xep diem theo thu tu tang dan
    for (int i=0; i<num_students - 1; i++) {
        for (int j = i+1; j<num_students; j++) {
            if (scores[i] > scores[j]) {
                float temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        }
    }
// In kết quả sau khi sắp xếp
    printf("\nDiem sau khi sap xep tang dan:\n");
    for (int i=0; i<num_students; i++) {
        printf("%.2f ", scores[i]);
    }
    printf("\n"); 
    
    return 0;
}
