#include <stdio.h>

int main() {
    int n, i;
    int id[100];
    char name[100][50];
    float salary[100];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &id[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    printf("\n------ Employee Details ------\n");

    for(i = 0; i < n; i++) {
        printf("\nEmployee ID : %d\n", id[i]);
        printf("Name        : %s\n", name[i]);
        printf("Salary      : %.2f\n", salary[i]);
    }

    return 0;
}