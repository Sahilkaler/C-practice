#include<stdio.h>
#include<conio.h>
int main(){
    int num,rev=0,original,rem;
    print("enter the number:");
    scanf("%d",&num);
    original=num;
    do{
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    while(num>0);
    if(rev==original)
    printf(“The given number is a Palindrome”,original);
    else
    printf(“The given number is not a Palindrome”,original);
    
    }
