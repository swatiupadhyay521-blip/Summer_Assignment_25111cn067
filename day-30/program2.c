#include <stdio.h>

int main() {
    int n, i;
    int id[100];
    char title[100][50], author[100][50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &id[i]);

        printf("Enter Book Title: ");
        scanf("%s", title[i]);

        printf("Enter Author Name: ");
        scanf("%s", author[i]);
    }

    printf("\n------ Library Records ------\n");

    for(i = 0; i < n; i++) {
        printf("\nBook ID : %d\n", id[i]);
        printf("Title   : %s\n", title[i]);
        printf("Author  : %s\n", author[i]);
    }

    return 0;
}