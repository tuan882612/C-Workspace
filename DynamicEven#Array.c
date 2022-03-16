#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(num)/sizeof(num[0]);
    int* arr = (int*)malloc(10*sizeof(int));
    
    for(int i=0; i<len; ++i){
        if(num[i]%2==0){
            arr[i] = num[i];
            printf("%d ", arr[i]);
        }
    }

    free(arr);
    return 0;
}