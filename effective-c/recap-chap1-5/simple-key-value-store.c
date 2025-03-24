/* Create a simple key-value store using file I/O, memory management, and structs in C.

Requirements:

    Use a struct to store key-value pairs (char* key, int value).

    Support adding, retrieving, and deleting key-value pairs.

    Store data in a file (store.txt) using formatted I/O.

    Use dynamic memory allocation for handling keys.

    Use functions for modularity.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_KEY_LEN 50
#define FILE_NAME "store.txt"

typedef struct {
    char key[MAX_KEY_LEN];
    int value;
} keyvalue;

// function prototypes
void addKeyValue();
void retrieveValue();
void deleteKeyValue();
void displayMenu();

int main() {
    int choice;
    while(1) {
        displayMenu();
        scanf("%d",&choice);
        getchar();

        switch(choice) {
            case 1: addKeyValue(); break;
            case 2: retrieveValue(); break;
            case 3: deleteKeyValue(); break;
            case 4: printf("Exiting...\n"); return 0;
            default: printf("Invalid choice. Try again.\n");
        }
    }
}


void addKeyValue() {
    keyvalue kv;
    printf("Enter key: ");
    fgets(kv.key,MAX_KEY_LEN,stdin);
    kv.key[strcspn(kv.key,"\n")]=0; //remove newline
    printf("Enter value: ");
    scanf("%d",&kv.value);
    getchar();

    FILE *file=fopen(FILE_NAME,"a");
    if(!file) {
        perror("error opening file");
        return;
    }
    fprintf("file, %s %d\n",kv.key,kv.value);
    fclose(file);
    printf("Key stored successfully!\n");
}

void retrieveValue() {
    char searchKey[MAX_KEY_LEN];
    
    // Input search key
    printf("Enter key to retrieve: ");
    fgets(searchKey, MAX_KEY_LEN, stdin);
    searchKey[strcspn(searchKey, "\n")] = 0; // Remove newline

    // Open file for reading
    FILE *file = fopen(FILE_NAME, "r");
    if (!file) {
        perror("Error opening file");
        return;
    }

    // Search for key
    char existingKey[MAX_KEY_LEN];
    int value;
    int found = 0;

    while (fscanf(file, "%s %d\n", existingKey, &value) == 2) {
        if (strcmp(existingKey, searchKey) == 0) {
            printf("Value for key '%s': %d\n", searchKey, value);
            found = 1;
            break;
        }
    }

    fclose(file);

    if (!found) {
        printf("Key '%s' not found.\n", searchKey);
    }
}


void deleteKeyValue() {
    char deleteKey[MAX_KEY_LEN];
    
    // Input key to delete
    printf("Enter key to delete: ");
    fgets(deleteKey, MAX_KEY_LEN, stdin);
    deleteKey[strcspn(deleteKey, "\n")] = 0; // Remove newline

    // Open original and temporary files
    FILE *originalFile = fopen(FILE_NAME, "r");
    FILE *tempFile = fopen("temp.txt", "w");

    if (!originalFile || !tempFile) {
        perror("Error opening files");
        if (originalFile) fclose(originalFile);
        if (tempFile) fclose(tempFile);
        return;
    }

    // Copy file contents, skipping the key to be deleted
    char existingKey[MAX_KEY_LEN];
    int value;
    int deleted = 0;

    while (fscanf(originalFile, "%s %d\n", existingKey, &value) == 2) {
        if (strcmp(existingKey, deleteKey) != 0) {
            fprintf(tempFile, "%s %d\n", existingKey, value);
        } else {
            deleted = 1;
        }
    }

    // Close files
    fclose(originalFile);
    fclose(tempFile);

    // Replace original file
    remove(FILE_NAME);
    rename("temp.txt", FILE_NAME);

    // Print result
    if (deleted) {
        printf("Key '%s' deleted successfully.\n", deleteKey);
    } else {
        printf("Key '%s' not found.\n", deleteKey);
    }
}


void displayMenu() {
    printf("\n1. Add key-value pair\n");
    printf("2. Retrieve value by key\n");
    printf("3. Delete key-value pair\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
}

