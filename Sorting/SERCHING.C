/*
This program sort number based on serching number
Author: prince chovatiya
Date: 15th dec 2025
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5]={0},i=0,num;
	clrscr();

	//input
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter serching number :",num);
	scanf("%d",&num);

	for(i=0;i<=4;i++)
	{
		if(a[i]==num)
		{
			printf("\n %d is found ",num);
			break;
		}
	}

	if(a[i]!=num)
	{
		printf("\n %d is not found",num);
	}

	getch();
}