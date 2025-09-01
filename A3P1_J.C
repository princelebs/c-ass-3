
#include<stdio.h>
#include<conio.h>

void main()
{
    int x=1, n, y;
    clrscr();
    printf("input n: ");
    scanf("%d",&n);

    for(y=1; x<=n; y++)
    {
	printf("\n %d", x);
	x = x + (y*y*y);
    }


    getch();
}