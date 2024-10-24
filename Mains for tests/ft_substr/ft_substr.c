#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const char *original = "Hello, world!";
    unsigned int start = 7;
    size_t len = 5;
    
    char *substring = ft_substr(original, start, len);
    
    if (substring) {
        printf("Substring: %s\n", substring);
        free(substring);
    } else {
        printf("Memory allocation failed.\n");
    }
    
    return 0;
}
