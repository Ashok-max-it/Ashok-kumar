#include <stdio.h>

int main() {
    char name[100];
    char edition[50];
    char genre[50];
    char author[100];
    printf("Enter book name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter edition: ");
    fgets(edition, sizeof(edition), stdin);

    printf("Enter genre: ");
    fgets(genre, sizeof(genre), stdin);
     printf("Enter author name: ");
    fgets(author, sizeof(author), stdin);
    printf("\n--- Book Details ---\n");
    printf("Name: %s", name);
    printf("Edition: %s", edition);
    printf("Genre: %s", genre);
    printf("Author: %s", author);

    return 0;
}
