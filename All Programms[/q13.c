#include <stdio.h>
#include <string.h>

#define N 100

struct DOB {
    int day, month, year;
};

struct Emp {
    int id;
    char name[50], dept[30];
    struct DOB dob;
};

int main() {
    struct Emp e[N];
    int i;

    for (i = 0; i < N; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &e[i].id);
        getchar(); 

        printf("Name: ");
        fgets(e[i].name, 50, stdin);
        e[i].name[strcspn(e[i].name, "\n")] = 0;  

        printf("Department: ");
        fgets(e[i].dept, 30, stdin);
        e[i].dept[strcspn(e[i].dept, "\n")] = 0;  

        printf("DOB (dd mm yyyy): ");
        scanf("%d %d %d", &e[i].dob.day, &e[i].dob.month, &e[i].dob.year);
    }

    printf("\nEmployees in Sales Department:\n");
    for (i = 0; i < N; i++) {
        if (strcmp(e[i].dept, "Sales") == 0) {
            printf("%d %s %d-%d-%d\n", e[i].id, e[i].name, e[i].dob.day, e[i].dob.month, e[i].dob.year);
        }
    }

    return 0;
}
