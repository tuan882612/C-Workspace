#include <stdio.h>

void bsort(int *arr, int len){
    int temp;
        for(int i=0; i<len; i++){
            for(int j=0; j<len-i-1; j++){
                if(arr[i]>arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
}

int main(){
    int arr[] = {23, 32, 5, 32, 82, 23, 93, 567, 7, 234, 5, 23, 54, 675}, len = sizeof(arr)/sizeof(arr[0]);
    bsort(arr, len);
        for(int i=0; i<len; i++){
            printf("%d ", arr[i]);
        }
    return 0;
}