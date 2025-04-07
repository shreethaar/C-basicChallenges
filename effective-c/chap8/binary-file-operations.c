#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    double value;
} Record;

int main(void) {
    FILE* file;
    Record records[3] = {
        {1,"Item One", 10.5},
        {2,"Item Two", 20.75},
        {3,"Item Three", 30.25}
    };
    Record read_records[3];

    // Opening a binary file for writing    
    file=fopen("records.bin","wb");
    if(file==NULL) {
        fprintf(stderr,"Error opening file: %s\n",strerror(errno));
        return EXIT_FAILURE;
    }

    // Writing binary data
    size_t written = fwrite(records,sizeof(Record),3,file);
    if(written!=3) {
        fprintf(stderr,"Error writing to file\n");
        fclose(file);
        return EXIT_FAILURE;
    }

    fclose(file);

    // Opening a binary file for reading
    file = fopen("records.bin","rb");
    if(file==NULL) {
        fprintf(stderr,"Error opening file: %s\n",strerror(errno));
        return EXIT_FAILURE;
    }


    // Reading binary data
    size_t read = fread(read_records,sizeof(Record),3,file);
    if(read!=3) {
        if(feof(file)) {        // feof -> to determine the end of file
            fprintf(stderr,"Unexpected end of file\n");
        }
        else {
            fprintf(stderr,"Error reading from file\n");
        }
        fclose(file);
        return EXIT_FAILURE;
    }

    // Display the read records 
    printf("Records read from file:\n");
    for(size_t i=0;i<3;i++) {
        printf("Record %zu: ID=%d, Name=%s, Value=%.2f\n",
                i+1,read_records[i].id,read_records[i].name,read_records[i].value);
    }

    fclose(file);
    return EXIT_SUCCESS;
}

