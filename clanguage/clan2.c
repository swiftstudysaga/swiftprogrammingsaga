#include<stdio.h>
void main(){
    double number;
    scanf("%lf", &number);
    if(number==0) printf("The number is Zero");
    if(number<0) printf("The number is Negative");
    if(number>0) printf("The number is Positive");
}
