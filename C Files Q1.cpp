#include <stdio.h>

int main() {
    char title[100];
    FILE *file;

    // "a" means append, so old records are not deleted
    file = fopen("borrowed_books.txt", "a");

    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    printf("Enter the book title: ");
    fgets(title, 100, stdin);   // fgets lets the title have spaces

    fprintf(file, "%s", title);
    fclose(file);

    printf("Book title saved successfully.\n");

    return 0;
}