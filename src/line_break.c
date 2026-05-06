/*
 * E89 Pedagogical & Technical Lab
 * project: Project TR
 * created on:  2026-01-10 - 17:59 +0100
 * 1st author:  emma.ploton
 * description: line break
 */

#include <stdlib.h>

char *line_break(char *strd)
{
    int i;
    int j;
    char *line;

    i = 0;
    j = 0;
    line = malloc(sizeof(char)*100);
    while (strd[i] != '\0') {
        if (strd[i] == '\\' && strd[i + 1] == 'n') {
            line[j] = '\n';
            i = i + 2;
            j = j + 1;
        } else {
            line[j] = strd[i];
            i = i + 1;
            j = j + 1;
        }
    }
    line[j] = '\0';
    return line;
}
