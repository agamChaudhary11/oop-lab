#include<stdio.h>
int main()
{int i,j=0;
printf("enter no :");
scanf("%d",&i);
while(i!=0)
{i/=10;
j++;
}
printf("no of digits=%d",j);
}
