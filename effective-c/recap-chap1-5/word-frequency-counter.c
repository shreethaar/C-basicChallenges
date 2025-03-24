// word frequency counter

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define INIT_CAPACITY 100
#define MAX_WORD_LENGTH 51
#define LINE_BUFFER_SIZE 1024

typedef struct {
    char word[51];
    int count;
} wordentry;



int main() {
    FILE *fp = fopen("input.txt","r");
    if(!fp) {
        perror("Error opening file");
        return 1;
    }
    
    int capacity = INIT_CAPACITY;
    int count = 0;
    wordentry *entries = malloc(capacity*sizeof(wordentry));
    if(!entries) {
        perror("malloc failed");
        fclose(fp);
        return 1;
    }

    char line[LINE_BUFFER_SIZE];
    while(fgets(line,sizeof(line),fp)) {
        char *token=strtok(line,"\t\n");
        while(token) {
            char cleaned[MAX_WORD_LENGTH];
            cleanword(token,cleaned);
            if(strlen(cleaned)>0) {
                int found=0;
                for(int i=0;i<count;i++) {
                    if(strcmp(entries[i].word,cleaned==0) {
                            entries[i].count++;
                            found=1;
                            break;
                            }
                        }
                        if (!found) {
                    // Resize the array if needed.
                    if (count == capacity) {
                        capacity *= 2;
                        WordEntry *temp = realloc(entries, capacity * sizeof(WordEntry));
                        if (!temp) {
                            perror("realloc failed");
                            free(entries);
                            fclose(fp);
                            return 1;
                        }
                        entries = temp;
                    }
                    strncpy(entries[count].word, cleaned, MAX_WORD_LENGTH);
                    entries[count].word[MAX_WORD_LENGTH - 1] = '\0';
                    entries[count].count = 1;
                    count++;
                }
            }
            token = strtok(NULL, " \t\n");
        }
    }
    fclose(fp);

    qsort(entries, count, sizeof(WordEntry), compareWords);

    // Print the sorted list of words and their counts.
    for (int i = 0; i < count; i++) {
        printf("%s: %d\n", entries[i].word, entries[i].count);
    }

    free(entries);
    return 0;
}


    
    return 0;
}

