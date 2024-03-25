#include <stdio.h>


int factorial(int);


int factorial(int n){
    if (n=0)
    {
        return 1;
    }
    
    return n*factorial(n-1);

}

int main()
{
    int n;
    int fac;
    

    printf("\nEnter a number for factorial : \n");
    scanf("%d",&n);
    
    fac = factorial(n);

    printf("\nfactorial of %d = %d",n,fac);

    printf("\n\n");
    return 0;

}