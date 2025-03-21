#include <stdio.h>

int main(void) {
    int i,j;

    printf("Using goto to exit nested loops:\n");
    for(i=0;i<5;i++) {
        for(j=0;j<5;j++) {
            if(i*j>6) {
                printf("\nProduct i*j exceeded 6 at i=%d, j=%d\n", i, j);
                goto end_of_loops;
            }
            printf("(%d,%d) ",i,j);
        }
        printf("\n");
    }
    end_of_loops:
    printf("Exited the nested loops.\n\n");

    int status=0;
    printf("Resource allocation simulation:\n");
    printf("Allocating resource 1...\n");
    status=-1;
    if(status!=0) {
        printf("Error allocating resource 1!\n");
        goto cleanup;
    }

    printf("Allocating resource 2...\n");
    printf("All resource allocated successfully.\n");
    printf("Processing data...\n");

    cleanup:
    printf("Performing cleanup...\n");
    printf("Cleanup complete.\n\n");

    int state = 0;
    printf("Simple state machine using goto:\n");
    
    state0:
        printf("In state 0\n");
        state = 1;
        goto state1;
    
    state1:
        printf("In state 1\n");
        state = 2;
        goto state2;
    
    state2:
        printf("In state 2\n");
        state = 3;
        goto state3;
    
    state3:
        printf("In state 3 (final state)\n");
    
    printf("\nNote: goto is generally discouraged in modern C programming except for specific cases\n");
    printf("such as error handling or breaking out of nested loops.\n");
    
    return 0;
}

