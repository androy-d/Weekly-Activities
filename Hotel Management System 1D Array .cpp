#include <stdio.h>

int main() {
    double revenue[7];
    double total = 0;
    int i;

    // get the revenue for each day
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%lf", &revenue[i]);
        total = total + revenue[i];
    }

    printf("Total weekly revenue: KSh. %.2f\n", total);
    printf("Average daily revenue: KSh. %.2f\n", total / 7);

    return 0;
}