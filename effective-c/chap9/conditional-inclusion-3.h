// example 3: OS-specific code

#ifdef _WIN32
    #include <windows.h>

#elif defined(__linux__)
    #include <unistd.h>
#endif

