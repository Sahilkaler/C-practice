#include<stdio.h>
#include<conio.h>
void main(){
    int a[3][3],b[3][3],c[3][3]={0,0,0,0,0,0,0,0,0},i,j,k;
    printf("enter the elements of the first array:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elemts of the second array:");
for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                c[i][j]=a[i][k]*b[k][j]+c[i][j];
            }
        }
    }
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d",c[i][j]);
        }
    }


}