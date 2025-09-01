#include<stdio.h>
#include<conio.h>
void main()
{
	int i=10,n;
	clrscr();
	printf("enter number ;");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("\n%d",i);
		i=i+10;
	}
	getch();
}