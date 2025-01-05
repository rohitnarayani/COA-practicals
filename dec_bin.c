#include<stdio.h>
#define MAX 8
int main(){
    int n,count;
    int bin[MAX]={0};

    printf("\n Enter decimal number: ");
    scanf("%d",&n);

    for(int i=0;i<MAX && n>0;i++){
        bin[i] = bin[i] + (n%2);
        n = n/2;
        count++;
    }

    printf("\n Binary: ");

    for(int i=count-1;i>=0;i--){
        printf("%d",bin[i]);
    }
}