/* write a program to  read and sum  and product of digits in a given number */
#include <stdio.h>
int main()
{
    int n, d, sum=0, product=1;

    printf("Enter the value  ");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        sum +=d;
        product *= d;
        
        n /=10;
        }
    printf("sum of digits=%d\n",sum);
    printf("product of digits=%d\n",product);


    
}