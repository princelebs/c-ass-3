#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter number ;");
	scanf("%d",&n);
	i=n;

	while(i>=10)
	{
		printf("\n%d",i);
		i=i-10;
	}
	getch();
}