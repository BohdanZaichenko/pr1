#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Zaichenko Bohdan IPZ-22008b\n");

    int t1, t2, t3;

     printf("\nInput 3 values: ");
     scanf("%d %d %d", &t1, &t2, &t3);

    float total=(t1+t2+t3);

    float hours=total/3;

    printf("\nTime needed for eating cake: %.2f hours\n", hours);

    return 0;
}
