#include <stdio.h>

// simulate macros for demonstration (you would not define these manually)
#define POSIX_THREADS 200809L
// #define __STDC__ 1
// #define __STDC_NO_THREADS__ 1
//
//


#if defined(__STDC__) && (!defined(__STDC_NO_THREADS__) || __STDC_NO_THREADS__ != 1)
    #include <threads.h>
    #define THREADING_SUPPORTED
#elif defined(POSIX_THREADS) && POSIX_THREADS == 200809L
    #include <pthread.h>
    #define THREADING_SUPPORTED
#else
    int compile_error[-1];  // Force a compile-time error
#endif

int main(void) {
#ifdef THREADING_SUPPORTED
    printf("Threading library included successfully.\n");
#else
    printf("Threading is not supported.\n");
#endif
    return 0;
}
