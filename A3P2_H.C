#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,y=1,diff=1;
	clrscr();
	printf("enter number :");
	scanf("%d",&n);
	i=n;

	for(i=n;i>=1;i--)
	{
		y=y+diff;
		diff++;
	}
	for(i=n;i>=1;i--)
	{
		printf("\n%d",y);
		y=y-(i-1);
	}


	getch();
}