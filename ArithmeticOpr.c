#include<stdio.h>
int main() {
    int n1,n2,sum,sub,multi;
    float div;
    printf("enter two  integers:");
    scanf("%d %d",&n1,&n2);
    sum=n1+n2;
    sub=n1-n2;
    multi=n1*n2;
    div=n1/(float)n2;
    printf("Additon is %d \n",sum);
    printf("Difference is %d \n",sub);
    printf("Product is %d \n",multi);
    printf("Division is %2f \n",div);
    return 0;
}