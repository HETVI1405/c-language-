#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	
	printf("enter a vlaue:");
	scanf("%d",&a);
	
	printf("enter b vlue:");
	scanf("%d",&b);
	
	printf("enter c vlue:");
	scanf("%d",&c);
	
	printf("enter d vlue:");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d){
				printf("max=a");
				
			}
		}
			else
			{
				if(c>d){
					printf("max=c");}
					else{	printf("max=d");
					}
				
				}
			}
	
	
		else{
			if(b>c){
			if(b>d){
				
				printf("max=b");
			
		}
			else{
				printf("max=d");
			}
		}
	
		
			else
			 {
				if(c>d){
					printf("max=c");
				}
				else{
					printf("max=d");
				}
			}
			}
}
	
	
		