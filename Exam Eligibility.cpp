#include <stdio.h>

int main() {
    int attended, total_classes;
    int average_marks;
    float attendance_percentage;

    printf("Enter classes attended: ");
    scanf("%d", &attended);

    printf("Enter total classes: ");
    scanf("%d", &total_classes);

    printf("Enter average marks: ");
    scanf("%d", &average_marks);

    attendance_percentage = (float)attended / total_classes * 100;

    printf("Attendance: %.1f%%\n", attendance_percentage);

    if (attendance_percentage >= 75 && average_marks >= 40) {
        printf("Eligible for exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}