#include<stdio.h>
#include<conio.h>
int main(){
    int n,f=1,i;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    f=f*i;
    printf("factorial of %d is %d",n,f);
    return 0;
}