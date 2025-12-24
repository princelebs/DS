#include<stdio.h>
#include<conio.h>
void main()
{
	int stack[5]={0},i=0,top=-1,choice=0,num=0;
	while(choice !=4)
	{
		clrscr();
		printf("\n1.insert");
		printf("\n2.display");
		printf("\n3.delete");
		printf("\n4.exit");
		printf("\n input your choice :");
		scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			if(top==4)
			{
				printf("\nstack is full");
			}
			else
			{
				scanf("%d",&num);
				top=top+1;
				stack[top]=num;
			}
			break;
		case 2:
			if(top==-1)
			{
				printf("\n stack is empty");
			}
			else
			{
				for(i=top;i>=0;i--)
				{
					printf("\n %d",stack[i]);
				}
			}
			break;
		case 3:
			if(top==-1)
			{
				printf("\n stack is empty");
			}
			else
			{
				num=stack[top];
				top=top-1;
				printf("\n %d is deleted",num);
			}
			break;
		case 4:
			break;
		default:
			printf("\n invalid choice");
	}
		getch();
	}
}