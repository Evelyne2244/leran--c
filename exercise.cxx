#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book b;
    FILE *file;

    // Input book details
    printf("Enter book title: ");
    fgets(b.title, sizeof(b.title), stdin);

    printf("Enter author name: ");
    fgets(b.author, sizeof(b.author), stdin);

    printf("Enter price: ");
    scanf("%f", &b.price);

    // Save to file
    file = fopen("book.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "%s%s%.2f\n", b.title, b.author, b.price);
    fclose(file);

    // Read from file and display
    file = fopen("book.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nSaved Book Details:\n");
    fgets(b.title, sizeof(b.title), file);
    fgets(b.author, sizeof(b.author), file);
    fscanf(file, "%f", &b.price);

    printf("Title: %s", b.title);
    printf("Author: %s", b.author);
    printf("Price: %.2f\n", b.price);

    fclose(file);

    return 0;
}