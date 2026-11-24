#include <stdio.h>

struct Student {
    char name[50];
    char regNumber[20];
    float marks;
};

int main() {
    struct Student student;
    FILE *file;

    // "rb" means read binary
    file = fopen("results.dat", "rb");

    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    // keep reading one student at a time until the file ends
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s\n", student.name);
        printf("Marks: %.2f\n\n", student.marks);
    }

    fclose(file);

    return 0;
}