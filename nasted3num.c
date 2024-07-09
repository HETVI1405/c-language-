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
	
	if(a<b){
		if(a<c){
			printf("min=a");
		}
		else
		{
			printf("min=c");
		}
	}
	else
	{
		printf("min=b");
	}
	
}
