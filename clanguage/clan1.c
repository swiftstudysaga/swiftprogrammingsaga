#include<stdio.h>
#define PI 3.14
void main(){
    int radius;
    float area;
    scanf("%d", &radius);
    area = PI * radius * radius;
    printf("Area of a circle = %f\n", area);
}