#include<stdio.h>

int main(){
    int decNum,remainder,index=0;
    char hexNum[20];

    printf("\n Enter number: ");
    scanf("%d",&decNum);

    while(decNum != 0){
        remainder = decNum % 16;

        if(remainder < 10){
            hexNum[index] = 48 + remainder;
        }
        else{
            hexNum[index] = 55 + remainder;
        }

        decNum = decNum/16;
        index++;
    }

    printf("\n Hexadecimal: ");
    for(int i=index-1;i>=0;i--){
        printf("%c",hexNum[i]);
    }
}