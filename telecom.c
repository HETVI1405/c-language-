#include<stdio.h>
#include<conio.h>

void main()
{
	int choice;

	
	printf("press 1 for english\n");
	printf("press 2 for hindi\n");
	printf("press 3 for gujarati\n\n");
	
	printf("enter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			printf("press 1 for internet recharge\n");
			printf("press 2 for top-up recharge\n");
			printf("press 3 for special recharge\n\n");
			
			printf("enter  recharge plane:");
			scanf("%d",&choice);
    
    
		switch(choice)
		{
			case 1:
			 printf("internet recharge is successful....");
			break;
			case 2:
			printf("top-up recharge successful\n");
		
			break;
			case 3:
			printf("special recharge suceessful\n\n");
			break;	
				
	    }
	    case 2:
	    	printf("press 1 internet recharge ke liye\n");
	    	printf("press 2 top-up recharge ke liye\n");
	    	printf("press 3 special recharge ke liye\n\n");
	    	
	    	printf("apna recharge plan chune:");
	    	scanf("%d",&choice);
	    switch(choice)
		{
		
	          case 1:
			  printf("internet recharge success ho gya\n");
			  break;
			  case 2:
			  printf("top-up recharge success ho gya\n");
			  break;
			  case 3:
			  printf("special recharge success ho gya");
		
		}
		case 3:
			printf("press 1  internet recharge mate\n");
			printf("press 2 top-up recharge mate\n");
			printf("press 3 special recharge mate\n\n");
			
		printf("tamaru recharge plane pasand kro:");
		scanf("%d",&choice);
		
		switch(choice)	
		{
			case 1:
				printf("internet recharge success thay gayu....");
				break;
			case 2:
				printf("top-up recharge success thay gayu...");
				break;
			case 3:
				printf("special recharge success thay gayu...");
		}
			 
	    	
}
}
