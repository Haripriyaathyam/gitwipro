/* write a program to find the least num of in a given list*/

#include <stdio.h>

int main()

{
    int n, i ;
    int arr[5];
    int min;

    printf("\nEnter the number of elements  :");
    scanf("/d",&n);

    for (int i = 0; i < n; ++i){
        printf("\nEnter numbers: ");
        scanf("%d",&arr[i]);
    }
    
    for (max  i = 1; i <n; ++i)
    {
         if (min>arr[i])
    {
        max[i];
    }
    }

    printf("\nleast element is :%d",max);
    return 0;
}