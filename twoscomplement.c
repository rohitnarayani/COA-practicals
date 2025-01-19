#include <stdio.h>
#define size 16
int* complementArray(int a[],int);

int main() {
    int arr[16] = {1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0}; // Corrected array declaration
    int *updatedArray;

    printf("\n Binary number: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    for(int i=15;i>=0;i--){
        if(arr[i] == 1){
            arr[i] = 1;
            updatedArray = complementArray(arr,i-1);
        }
        else{
            continue;
        }
    }
    printf("\n Complement:    ");
        for(int i=0;i<size;i++){
        printf("%d ",updatedArray[i]);
    }
}

int* complementArray(int a[],int j) {
    for (int i = j; i >= 0; i--) {
        if (a[i] == 0) {
            a[i] = 1; // Change 0 to 1
        } else {
            a[i] = 0; // Change 1 to 0
        }
    }
    return a; // Return the modified array
}