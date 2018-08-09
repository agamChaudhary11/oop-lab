#include<stdio.h>
int task(int n)
{
	    if(n==1)
	    return 1;
	    else
	    return n;fact(n-1);
}
int main()
{
	    int n,sum;
	    printf("enter number");
	    scanf("%d"&n);
	    sum=fact(n);
	    printf("factorial=%d",sum);
	    return 0;
}
