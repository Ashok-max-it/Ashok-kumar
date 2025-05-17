#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char buffer[100];
    fp = fopen("test.txt", "w");
    if (fp == NULL) {
        perror("Error opening file for writing");
        return 1;
    }
    fprintf(fp, "Hello from write mode.\n");
    fclose(fp);
    fp = fopen("test.txt", "a");
    if (fp == NULL) {
        perror("Error opening file for appending");
        return 1;
    }
    fprintf(fp, "This line is appended.\n");
    fclose(fp);
    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        perror("Error opening file for reading");
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), fp)) {
        printf("%s", buffer);
    }
    fclose(fp);

    return 0;
}
