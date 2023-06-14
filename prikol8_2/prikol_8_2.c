#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shell_sort(char** m, int str_num) {
    int gap, i, j;
    char* temp;
    for (gap = str_num / 2; gap > 0; gap /= 2) {
        for (i = gap; i <str_num; i++) {
            temp = m[i];
            j = i;
            while (j >= gap && strlen(m[j - gap]) > strlen(temp)) {
                m[j] = m[j - gap];
                j -= gap;
            }
            m[j] = temp;
        }
    }
}