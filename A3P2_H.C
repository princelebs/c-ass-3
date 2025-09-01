#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i = 1, y = 1, last;

    clrscr();
    printf("Enter last term value: ");
    scanf("%d", &n);

    while (i < n) 
    {
        i = i + y;
        y++;
    }

    last = i; 
    while (y > 0)
     {
        printf("\n%d", last);
        last = last - (y - 1);
        y--;
    }

    getch();
}
