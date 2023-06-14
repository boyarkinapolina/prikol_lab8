#include <stdio.h>
#include "sem8.h"

int main() {
    char s[212];
    char t[212];
    printf("Write 's' string: ");
    scanf("%s", s);
    printf("Write 't' string: ");
    scanf("%s", t);

    int result = strend(s, t);

    if (result == 0) {
        printf("0\n");
    }
    else {
        printf("1\n");
    }
    return 0;
}
