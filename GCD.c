#include <stdio.h>

#define x 1326
#define y 123

int main(){
    int len = 0;
    if(x>y){
        len = x;
    } else len = y;

    for(int i=len; i>=0; i--){
        if(y%i==0 && x%i==0){
            printf("%d ", i);
            i=0;
        }
    }
}