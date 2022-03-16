#include <stdio.h>

 int main() {
    int a, b, x, y;
    printf("Enter The Value For The Horizontal: ");
        scanf("%d", &a);
    printf("Enter The value For The Vertical: ");
        scanf("%d", &b);
    printf("Enter Numbers For Array:\n");

    int arr[a][b];
    for(x=0;x<a;x++) {
        for(y=0;y<b;y++) {
            printf("Element: ");
            scanf("%d", &arr[x][y]);
        }
    }

    printf("Array: \n");
    for(x=0;x<a;x++) {
        for(y=0;y<b;y++) {
            printf("%d ", arr[x][y]);
        }
    printf("\n");
    }
    return 0;
 }