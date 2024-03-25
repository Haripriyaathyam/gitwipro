#include <stdio.h>
int main()

{
    int i,j,n;
    int sumr,suml;
    int arr[7] ={-7,1,5,2,-4,3,0};

    for ( i = 0; i < 7; i++)
    {
        for (suml=0,j = 0; j<i; j++)
        {
            suml +=arr[j];
            }
        for(sumr=0,n=i+1;n<7;n++)
        {
            sumr+=arr[n];
        }
        printf("\nsuml=%d\tsumr=%d",suml,sumr);
        if(suml==sumr)
        {
            break;
        }        
    }
    printf("\narr[%d] = %d is eq\n",i,arr[i]);
    printf("\n\n");

    return 0;
    
}


