#include <stdio.h>

struct Patient {
    int ID;
    char name[30];
    int age;
    float Temperature;
    int admitted_days;
};

int main() {
    struct Patient patient1;
    int cost;

    printf("Enter patient ID: ");
    scanf("%d", &patient1.ID);

    printf("Enter patient name: ");
    scanf(" %29[^\n]", patient1.name);

    printf("Enter patient age: ");
    scanf("%d", &patient1.age);

    printf("Enter patient temperature: ");
    scanf("%f", &patient1.Temperature);

    printf("Enter days admitted: ");
    scanf("%d", &patient1.admitted_days);

    cost = patient1.admitted_days * 2500;

    printf("\nID: %d\n", patient1.ID);
    printf("Name: %s\n", patient1.name);
    printf("Age: %d\n", patient1.age);
    printf("Temperature: %.2f\n", patient1.Temperature);
    printf("Days admitted: %d\n", patient1.admitted_days);
    printf("Cost: %d\n", cost);

    return 0;
}

