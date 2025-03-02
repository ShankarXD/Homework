#include <stdio.h>
#include <string.h>

#define N 500

struct Student {
    char name[50];
    char faculty[50];
    char program[50];
    float gpa;
};

int main() {
    struct Student students[N];
    FILE *file = fopen("RESULT.DAT", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Faculty: ");
        scanf("%s", students[i].faculty);
        printf("Program: ");
        scanf("%s", students[i].program);
        printf("GPA: ");
        scanf("%f", &students[i].gpa);

        fwrite(&students[i], sizeof(struct Student), 1, file);
    }

    fclose(file);

    file = fopen("RESULT.DAT", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudents in Engineering faculty with GPA > 3.5:\n");
    for (int i = 0; i < N; i++) {
        fread(&students[i], sizeof(struct Student), 1, file);
        if (strcmp(students[i].faculty, "Engineering") == 0 && students[i].gpa > 3.5) {
            printf("Name: %s, Faculty: %s, Program: %s, GPA: %.2f\n", students[i].name, students[i].faculty, students[i].program, students[i].gpa);
        }
    }

    fclose(file);

    return 0;
}
