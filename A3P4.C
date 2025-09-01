#include <stdio.h>
#include <conio.h>

void main()
 {
    int n, i, sum = 0, count;
    float avg;
    clrscr();

    printf("Enter the value of n: ");
    scanf("%d", &n);

    count = n; 

    for(i = 1; i <= n; i++) 
    {
        sum += i;
    }

    avg = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Count = %d\n", count);
    printf("Average = %.2f\n", avg);
    getch();

}
