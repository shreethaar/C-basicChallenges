// character arrays and pointers

#include <stdio.h>
#include <string.h>
int main() {
    char C[20];
    C[0]='J';
    C[1]='O';
    C[2]='H';
    C[3]='N';
    C[4]='\0';
    C[5]='A';
    printf("%s\n",C);
    int len = strlen(C);
    printf("Length=%d\n",len);
    
    char C2[]="JOHN";
    printf("Size in bytes = %d\n",sizeof(C2));
    int lenC2=strlen(C2);
    printf("Length=%d\n",lenC2);

    char C3[5] = {'J','O','H','N','\0'};
    printf("Size in bytes = %d\n",sizeof(C3));
    int lenC3=strlen(C3);
    printf("Length = %d\n",lenC3);


    return 0;
}

