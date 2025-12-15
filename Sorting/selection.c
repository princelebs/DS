/*
This program sort number based on selection sorting
Author: prince chovatiya
Date: 10th dec 2025
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5]={0},i=0,j=0,k=0;
	clrscr();

	//input
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}

	//process
	//outer loop
	for(i=0;i<=3;i++)
	{
		 //inner loop
		for(j=i+1;j<=4;j++)
		{
			//interchange
			if(a[i]>a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}

	//output
	for(i=0;i<=4;i++)
	{
		printf("\n %d",a[i]);
	}

	getch();
}
