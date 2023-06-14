#include <stdio.h>
#include <string.h>

int strend(char *s, char *t) {
    int s_length = strlen(s);
    int t_lenght = strlen(t);
    if (t_lenght > s_length){
        return 0; 
        }
    char *s_konec = s + (s_length - t_lenght); 
    return strcmp(s_konec, t) == 0;
}