#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter number ;");
	scanf("%d",&n);
	i=n;

	do
	{
		printf("\n%d",i*i);
		i--;
	}while(i>=1);
	getch();
}