#include <stdio.h>

int main() {
    int n, i;
    int sum_even = 0, sum_odd = 0;
    int count_even = 0, count_odd = 0;
    float avg_even, avg_odd;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) { 
            sum_even += i;
            count_even++;
        } else {           
            sum_odd += i;
            count_odd++;
        }
    }

    if (count_even > 0)
        avg_even = (float)sum_even / count_even;
    else
        avg_even = 0;

    if (count_odd > 0)
        avg_odd = (float)sum_odd / count_odd;
    else
        avg_odd = 0;

    printf("\nEven Numbers:\n");
    printf("Sum = %d\n", sum_even);
    printf("Count = %d\n", count_even);
    printf("Average = %.2f\n", avg_even);

    printf("\nOdd Numbers:\n");
    printf("Sum = %d\n", sum_odd);
    printf("Count = %d\n", count_odd);
    printf("Average = %.2f\n", avg_odd);

}