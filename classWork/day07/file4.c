#include <stdio.h>

int displist(int[],int);
int sortdesc(int[],int);

int main(){
    int arr[] = {3,1,7,3,66,24,78,37,90,54};
    int size;
    int n;
    printf("\n Elements before sorting\n");
    dispList(arr,size);
    sortdes(arr,size);
    if (size)
    {
        size = sizeof (arr)/sizeof(arr[0]);
    }
    printf("\n Elements after sorting\n");
    printf("\n%d",arr[1]);

    printf("\n\n");
    return 1;

}

void dispList(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d",arr[i]);
    arr[1] = 101;
    printf("\n");
    return 0;
}
void sortdesc(int arr[], int n)
{
    int k,j,n,a;
    for(k=0;k<n;++k)
        {
            for ( j = 0; j < n; ++j)
            {
                if (n[k]<n[j+1])
                {
                    a[] = n[k];
                    n[k] =n[j+1];
                    n[j+1]=a;

                }
                
            }
            
        }
    
    printf("\n");
    return 0;
}
    
    
