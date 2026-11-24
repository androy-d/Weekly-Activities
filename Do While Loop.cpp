#include <stdio.h>

int isCorrect(char input[], char correct[]) {
    int i = 0;
    while (input[i] != '\0' && correct[i] != '\0') {
        if (input[i] != correct[i]) return 0;
        i++;
    }
    return input[i] == correct[i];
}

int main() {
    char password[20];

    do {
        printf("Enter password: ");
        scanf("%19s", password);
    } while (!isCorrect(password, "1234"));

    printf("Access Granted\n");
    return 0;
}