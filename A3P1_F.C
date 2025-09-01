#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	clrscr();
	printf("enter number ;");
	scanf("%d",&n);

	do
	{
		printf("\n%d",i*i);
		i++;
	}while(i<=n);
	getch();
}