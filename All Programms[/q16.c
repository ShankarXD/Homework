#include <stdio.h>
#include <string.h>
#define N 100
struct Student {
    char name[50];
    int roll;
    char address[100];
    char faculty[50];
};
int main() {
    struct Student students[N];
    FILE *file = fopen("student.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
        for (int i = 0; i < N; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        getchar(); 

        printf("Address: ");
        fgets(students[i].address, 100, stdin);
        students[i].address[strcspn(students[i].address, "\n")] = 0;  

        printf("Faculty: ");
        fgets(students[i].faculty, 50, stdin);
        students[i].faculty[strcspn(students[i].faculty, "\n")] = 0;  

        fprintf(file, "%s %d %s %s\n", students[i].name, students[i].roll, students[i].address, students[i].faculty);
    }

    fclose(file);

    printf("\nStudents not from Kathmandu:\n");
    for (int i = 0; i < N; i++) {
        if (strcmp(students[i].address, "Kathmandu") != 0) {
            printf("Name: %s, Roll: %d, Address: %s, Faculty: %s\n", students[i].name, students[i].roll, students[i].address, students[i].faculty);
        }
    }

    return 0;
}
