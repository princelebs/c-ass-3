#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n,y=1;
	clrscr();
	printf("enter number :");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("\n%d",i);
		i=i+y;
		y++;
	}


	getch();
}