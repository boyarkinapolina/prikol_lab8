#include <stdio.h>
#include "sem8.h"
#include <stdlib.h>
#include <string.h>

int main() {
    int str_num, i;
    printf("Write number of strings: ");
    scanf("%d", &str_num);
    char** m = (char**)malloc(str_num * sizeof(char*));
    for (i = 0; i < str_num; i++) {
        printf("Write string %d: ", i + 1);
        char buffer[100];
        scanf("%s", buffer);
        m[i] = strdup(buffer); 
    }

    shell_sort(m, str_num);

    printf("\nSorted:\n");
    for (i = 0; i < str_num; i++) {
        printf("%s\n", m[i]);
        free(m[i]);
    }
    free(m);
    return 0;
}