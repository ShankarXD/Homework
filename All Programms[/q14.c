#include <stdio.h>
#include <string.h>

#define N 50

struct Person {
    int id;
    char address[100];
};

int main() {
    struct Person persons[N];
    FILE *file = fopen("Person.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        printf("\nEnter details for person %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &persons[i].id);
        getchar(); 

        printf("Address: ");
        fgets(persons[i].address, 100, stdin);
        persons[i].address[strcspn(persons[i].address, "\n")] = 0;  

        fprintf(file, "%d %s\n", persons[i].id, persons[i].address);
    }

    fclose(file);

    printf("\nPersons with address Bharatpur:\n");
    for (int i = 0; i < N; i++) {
        if (strcmp(persons[i].address, "Bharatpur") == 0) {
            printf("ID: %d, Address: %s\n", persons[i].id, persons[i].address);
        }
    }

    return 0;
}
