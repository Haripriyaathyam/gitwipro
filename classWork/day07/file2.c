#include<stdio.h>

int addition(int,int);


int addition(int val1, int val2)
{
    int res = 0;
    res = val1+val2;
    return res;
}

int main()
{
    int v1,v2;
    int result=0;
    printf("\nenter values :");
    scanf("%d %d",&v1,&v2);
    result=addition(v1,v2);

    printf("\naddition of  %d + %d= %d",v1,v2,result);

    printf("\n\n");
    return 0;
    
}