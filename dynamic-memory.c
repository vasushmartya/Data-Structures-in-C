// Capitalizes a copy of a string, defining n in loop too

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Get a string
    char *s = "hello";

    // Allocate memory for another string
    char *t = malloc(strlen(s) + 1);

    if (t==NULL){
        printf("Memory allocation failed");
        exit(1);
    }

    // Copy string into memory, including '\0'
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    // Capitalize copy
    if(strlen(t)>0){
        t[0] = toupper(t[0]);
    }

    //instead can do strcpy(dest, source);

    // Print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);

    return 0;
}