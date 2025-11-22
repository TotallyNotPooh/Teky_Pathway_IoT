#include<stdio.h>


float cong(float a, float b);
float tru(float a, float b);
float nhan(float a, float b);
float chia(float a, float b);

int main() {
    float c;
    float t;
    float n;
    float d;
    c = cong(4,5);
    t = tru(4,5);
    n = nhan(4,5);
    d = chia(4,5);

    printf("%.2f\n", c);
    printf("%.2f\n", t);
    printf("%.2f\n", n);
    printf("%.2f\n", d);
    return 0;
}

float cong(float a, float b) {
    return a + b;
}
float tru(float a, float b) {
    return a - b;
}
float nhan(float a, float b) {
    return a * b;
}
float chia(float a, float b) {
    return a / b;
}