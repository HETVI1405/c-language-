#include<stdio.h>
#include<conio.h>

void main()
{
	int sub1,sub2,sub3,average;
	float per;
	
	printf("enter the mark of sub1:");
	scanf("%d",&sub1);
	
	printf("enter the mark of sub2:");
	scanf("%d",&sub2);
	
	printf("enter the mark of sub3:");
	scanf("%d",&sub3);
	
	average=sub1+sub2+sub3;
	per=average*100/300;
	
	printf("average mark:%.2f",per);
	
}
