#include <stdio.h>

int arr[3] = {1,2,3};

int arr2d[2][3] = {{1,2,3},{3,4,5}};

int main(){
    printf("arr length: %d\n", sizeof(arr) / sizeof(arr[0]));
    printf("arr2d row length: %d\n", sizeof(arr2d) / sizeof(arr2d[0]));
    printf("arr2d col length: %d\n", sizeof(arr2d[0]) / sizeof(arr2d[0][0]));
    return 0;
}
