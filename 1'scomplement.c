#include<stdio.h>

int main(){
    int arr[16] = {0,1,0,1,0,1,0,1,1,1,0,1,0,1,0,1};

    printf("\n Binary number: ");
    for(int i=0;i<16;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<16;i++){
        if(arr[i] == 0){
            arr[i] = 1;
        }
        else{
            arr[i] = 0; 
        }
    }
    printf("\n 1's Complement: ");
    for(int i=0;i<16;i++){
        printf("%d ",arr[i]);
    }
}