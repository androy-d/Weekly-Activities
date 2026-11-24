#include <stdio.h>

int main() {
    double amount;
    double total = 0;
    FILE *file;

    file = fopen("sales.txt", "r");

    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    // read each amount and add it to the total
    while (fscanf(file, "%lf", &amount) == 1) {
        total = total + amount;
    }

    fclose(file);   // always close the file after reading

    printf("Total sales for the day: KSh. %.2f\n", total);

    return 0;
}