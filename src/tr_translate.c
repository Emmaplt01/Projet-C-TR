/*
 * E89 Pedagogical & Technical Lab
 * project: Project tr
 * created on:  2025-12-12 - 13:37 +0100
 * 1st author:  emma.ploton
 * description: function read and show
 */

#include <unistd.h>
#include <stdlib.h>

char match(int c, char **av);

int tr_translate(char **av)
{
    int i;
    char *buffer;
    char *str;
    int n;

    buffer = malloc(sizeof(char) * 100);
    str = malloc(sizeof(char) * 100);
    n = read(0, buffer, 99);
    buffer[n] = '\0';
    i = 0;
    while (buffer[i] != '\0') {
        str[i] = match(buffer[i], av);
        write(1, &str[i], 1);
        i = i + 1;
    }
    free(buffer);
    free(str);
    return 0;
}
