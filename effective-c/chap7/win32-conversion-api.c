// Win32 conversion API
// Two functions for converting between wide and narrow characters strings:
// 1. MultiByteToWideChar: Maps a character string to a new UTF-16 
// 2. WideCharToMultiByte: Maps a UTF-16 (wide character) string to a new character string 

#include <wchar.h>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    // Original UTF-8 string 
    const char* utf8String = "Hello, 世界! Привет, мир! 😊";
    printf("Original string: %s\n",utf8String);
    print_utf8_bytes(utf8String);

    // Step 1: convert UTF-8 to UTF-16 (MultiByteToWideChar)

    // First, calculate required buffer size
    int wideBufferSize = MultiByteToWideChar(
            CP_UTF8,    // Source code page: UTF-8
            0,          // Default flags
            utf8String, // Source UTF-8 string
            -1,         // Null-terminated string
            NULL,       // Output buffer (NULL for size calculation) 
            0,          // Output buffer size( 0 for size calculation)
);
    if(wideBufferSize==0) {
        printf("Error calculating buffer size: %lu\n",GetLastError());
        return 1;
    }

    // Allocate memory for the UTF-16 string
    wchar_t* utf16String = (wchar_t*)malloc(wideBufferSize*sizeof(wchar_t));
    if(utf16String==NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Perform the actual conversion
    int result=MultiByteToWideChar(
            CP_UTF8,        // Source code page: UTF-8
            0,              // Default flags
            utf8String,     // Source UTF-8 string
            -1,             // Null-terminated string
            utf16String,    // Output buffer
            wideBufferSize  // Output buffer size 
    );

    if(result==0) {
        printf("Conversion to UTF-16 failed:%lu\n",GetLastError());
        free(utf16String);
        return 1;
    }

    printf("\nUTF-16 string (after MultiByteToWideChar):\n");
    wprintf(L"%ls\n",utf16String);
    print_utf16_bytes(utf16String);

    // Step 2: Convert UTF-16 back to UTF-8 (WideCharToMultiByte)
        
    // Calculate required buffer size
    int utf8BufferSize = WideCharToMultiByte(
            CP_UTF8,            // Target code page: UTF-8
            0,                  // Default flags
            utf16String,        // Source UTF-16 string
            -1,                 // Null-terminated string
            NULL,               // Output buffer (NULL for size calculation)
            NULL
    );

    if(utf8BufferSize==0) {
        printf("Error calculating buffer size: %lu\n",GetLastError());
        free(utf16String);
        return 1;
    }

    // allocate memory for the converted UTF-8 string
    char* utf8Converted=(char*)malloc(utf8BufferSize*sizeof(char));
    if(utf8Converted==NULL) {
        printf("Memory allocation failed\n");
        free(utf16String);
        return 1;
    }

    // perform the actual conversion
    result=WideCharToMultiByte(
        CP_UTF8,        // Target code page: UTF-8
        0,              // Default flags
        utf16String,    // Source UTF-16 string
        -1,             // Null-terminated string
        utf8Converted,  // Output buffer
        utf8BufferSize, // Output buffer size
        NULL,           // Default character (not used with UTF-8)
        NULL            // Default character used flag (not used with UTF-8)
    );

    if(result==0) {
        printf("Conversion to UTF-8 failed: %lu\n",GetLastError());
        free(utf16String);
        free(utf8Converted);
        return 1;
    }

    printf("\nUTF-8 string (after WideCharToMultiByte):\n:");
    printf("%s\n",utf8Converted);
    print_utf8_bytes(utf8Converted);

    // clean up 
    free(utf16String);
    free(utf8Converted);

    return 0;
}

        

            )


