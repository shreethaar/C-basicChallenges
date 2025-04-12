#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Create a file containing formatted text
    FILE *fp = fopen("formatted_data.txt", "w");
    if (fp == NULL) {
        perror("Failed to create formatted_data.txt");
        return EXIT_FAILURE;
    }
    fprintf(fp, "1 3.14 Hello\n2 2.718 World\n3 1.414 Test\n");
    fclose(fp);

    // Now read the formatted text using fscanf
    fp = fopen("formatted_data.txt", "r");
    if (fp == NULL) {
        perror("Failed to open formatted_data.txt for reading");
        return EXIT_FAILURE;
    }

    int id;
    double value;
    char word[32];

    while (fscanf(fp, "%d %lf %31s", &id, &value, word) == 3) {
        printf("Read -> ID: %d, Value: %.3f, Word: %s\n", id, value, word);
    }

    fclose(fp);
    return EXIT_SUCCESS;
}
