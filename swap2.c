#include<stdio.h>
void main(){
    int a,b;
    printf("enter the value of A and B:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value after swap is:%d\t%d",a,b); 

}