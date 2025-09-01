#include<stdio.h>
#include<conio.h>
void main()
{
	int i=2,n;
	clrscr();
	printf("enter number ;");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("\n%d",i);
		i=i+2;
	}
	getch();
}