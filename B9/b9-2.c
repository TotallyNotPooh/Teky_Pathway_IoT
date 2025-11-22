#include<stdio.h>
float a, b;

float tong(float a, float b) {
    return a + b;
}
float dientich(float a, float b) {
    return a * b;
}
int main() {
    float a = 0;
    float b = 0;
    float c;
    float s;

    printf("Nhap so a: ");
    scanf("%f", &a);
    printf("Nhap so b: ");
    scanf("%f", &b);
    c = tong(a,b);
    s = dientich(a,b);
    printf("Tong: %f\n", c);
    printf("Dien tich hinh chu nhat: %f\n", s);
    return 0;
} 


