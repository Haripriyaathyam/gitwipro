/*sort the elements in given list in decening order */
#include <stdio.h>

int main(){
    int arr[100];
    int i,j,n,temp;
    printf("Enter size of the array:");
    scanf("%d",&n);
    printf("Enter elements in array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\narray elements in decending order:\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}