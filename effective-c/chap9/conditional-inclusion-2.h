// example 2: feature toggle

#define DEBUG

#ifdef DEBUG
    #define LOG(msg) printf("DEBUG: %s\n",msg)

#else 
    #define LOG(msg) 
#endif

