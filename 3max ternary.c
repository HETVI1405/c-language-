#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("enter a vlaue:");
	scanf("%d",&a);
	
	printf("enter b vlue:");
	scanf("%d",&b);
	
	printf("enter c vlue:");
	scanf("%d",&c);
	int max=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("the max vlue is:%d",max);
	
}