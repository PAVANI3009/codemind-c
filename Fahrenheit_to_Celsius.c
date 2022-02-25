#include<stdio.h>
int main()
{
    float celsius,fahrenhiet;
    scanf("%f",&fahrenhiet);
    celsius=(fahrenhiet-32)*5/9;
    printf("%.2f",celsius);
    return 0;
}