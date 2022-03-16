#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
        for(int i=0; i<n; i++){
            if(i==0 || i==n-1){
                for(int j=0; j<n; j++){
                    printf("* "); //top and bottom rows
                }
            } else if(i<n-1 && i>0){
                printf("*"); // left column
                for(int k=1; k<n-1; ++k){ 
                    printf("  "); // space inside the box
                }
                printf(" *"); // right column
            }
            printf("\n"); // new rows
        }
    printf("Box printed.");
    return 0;
}