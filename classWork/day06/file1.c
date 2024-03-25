#include <stdio.h>
#define CAP 5
int main()
{
    int arr[CAP];
    printf("\nBase Address of array : %u",&arr[0]);
    printf("\naddress if arr[0] = %u",&arr[0]);
    printf("\naddress if arr[1] = %u",&arr[1]);
    printf("\naddress if arr[2] = %u",&arr[2]);
    printf("\naddress if arr[3] = %u",&arr[3]);
    printf("\naddress if arr[4] = %u",&arr[4]);
    
    printf("\n\n");
    return 0;

}