/* Statement: Write the logic for incrementing squared number-star pattern  */


#include <stdio.h>
int main(){

    int a,b,l,count=0;
    printf("\nEnter number of rows/colums \n");
    scanf("%d",&l);
    for(int a=0;a<l;a++){
        for(int b=0;b<l;b++){
            count++;
            if (b==l-1)
            {
                printf("%d",count);
            }
            else
            {
                printf("%d*",count);
            }
            
        }
        printf("\n");
    }
    
        return 0;
}


  

    


