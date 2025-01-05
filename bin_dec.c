#include<stdio.h>
#include<math.h>

int main(){
    long binNum;
    int decNum=0,base=0,r;

    printf("\n Enter binary number: ");
    scanf("%d",&binNum);

    while(binNum!=0){
        r = binNum%10;
        decNum += r * pow(2,base);
        binNum /= 10;
        base++;
    }
    printf("\n Decimal number: %d\n",decNum);
}