#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int compare(const void *elem1, const void *elem2){
    if((*(int*)elem1)==(*(int*)elem2)){
        return 0;    
    } else if((*(int*)elem1) < (*(int*)elem2)){
        return -1;
    } else return 1;
} 

int main() {
    int arr[] = {1,4,3,5,2};
    int len, width, i;

    len = sizeof(arr)/sizeof(arr[0]);
    width = sizeof(arr[0]);
    qsort((void*)arr, len, width, compare);

    for(i=0; i<5; i++){
        printf("%d ", arr[i]);    
    } 
    
    return 0;
}