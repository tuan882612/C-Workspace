#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void getFact(int num){
    int i;
    long long int len = num, fact = num;
    for(i=1; i<len; i++) fact*=i;
        printf("Factorial %d = %lld", num, fact);
}

int main() {
    printf("Enter number: ");
    int n; scanf("%d", &n);
    void (*ptr)(int);
    ptr = getFact;
    ptr(n);
    return 0;     
}
