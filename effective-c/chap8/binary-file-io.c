#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    float value;
} Record;

int main(void) {
    const char* filename = "data.bin";
    Record records[3] = {
                        {1,3.14f},
                        {2,2.71f},
                        {3,1.62f}
    };

    // write records to a binary file 
    FILE* fp = fopen(filename,"wb");
    if(fp==NULL) {
        perror("Error opening file for writing");
        return EXIT_FAILURE;
    }

    if(fwrite(records,sizeof(Record),3,fp)!=3) {
        perror("Error writing binary data");
        fclose(fp);
        return EXIT_FAILURE;
    }
    fclose(fp);

    // read records from the binary file
    Record read_records[3];
    fp=fopen(filename,"rb");
    if(fp==NULL) {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }

    if(fread(read_records,sizeof(Record),3,fp)!=3) {
        perror("Error reading binary data");
        fclose(fp);
        return EXIT_FAILURE;
    }
    fclose(fp);


    // Display the records read from the file
    for(int i=0;i<3;i++) {
       printf("Record %d: id=%d, value=%.2f\n",i+1,read_records[i].id,read_records[i].value);
    }
    return EXIT_SUCCESS;
}

