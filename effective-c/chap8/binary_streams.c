#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    float value;
} Record;

int main(void) {
    const char *filename = "binary_records.bin";
    Record records_out[3] = {
        {1, 3.14f},
        {2, 2.71f},
        {3, 1.62f}
    };

    // Write an array of structs to a binary file
    FILE *fp = fopen(filename, "wb");
    if (fp == NULL) {
        perror("Failed to open file for binary writing");
        return EXIT_FAILURE;
    }
    if (fwrite(records_out, sizeof(Record), 3, fp) != 3) {
        perror("Error writing records");
        fclose(fp);
        return EXIT_FAILURE;
    }
    fclose(fp);

    // Read them back
    Record records_in[3] = {0};
    fp = fopen(filename, "rb");
    if (fp == NULL) {
        perror("Failed to open file for binary reading");
        return EXIT_FAILURE;
    }
    if (fread(records_in, sizeof(Record), 3, fp) != 3) {
        perror("Error reading records");
        fclose(fp);
        return EXIT_FAILURE;
    }
    fclose(fp);

    // Display the read records
    for (int i = 0; i < 3; i++) {
        printf("Record %d -> ID: %d, Value: %.2f\n",
               i + 1, records_in[i].id, records_in[i].value);
    }

    return EXIT_SUCCESS;
}
