#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float a, b, c, r, r1, r2, d;
    printf("Enter the  coefficients:");
    scanf("%f%f%f", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    printf("\nThe value of d is %f", d);
    if (d < 0)
    {
        printf("the roots are not real");
    }
    if(d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("\nThe root one is %f", r1);
        printf("\nThe root two is %f", r2);
    }
    if(d==0){
        r=-b/(2*a);
        printf("\nThe roots are equal\n");
        printf("Root1=Root2=%f\n",r);
}}

