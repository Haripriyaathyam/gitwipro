#include <stdio.h>
int main()
{
    int n;
    int i,j;
    int sum=0;
    int flagb=0;
    int gnum;
    int arr[j];

    printf("\nEnter the values of array:");
    scanf("%d",&n);
    for (int i = 0; i < 0; i++)
    {
        sum = 0;
        for (j = 0; j<0; j++)
        {
            sum += arr[j];
            if (sum == gnum)
            {
                flagb=1;
                break;
            }
        }
        if (flagb == 1)
        {
            
            break;
        }
    }
    if (flagb==1)
    {
        printf("\n%d\t%d",i,j);
        printf("\nsum found between indexes 1 and 4\n");

    }
    else
    printf("\nno subarray found\n");
    
    printf("\n\n");
    return 0;
  
}