#include<stdio.h>
#include<conio.h>
void main()
{
	char i='A',n;
	clrscr();
	printf("input  :");
	scanf("%c",&n);

	while(i<=n)
	{
		printf(" %c",i);
		i++;
	}
	printf("\n");


	getch();
}