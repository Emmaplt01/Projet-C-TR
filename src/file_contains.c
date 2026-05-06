
/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 4 ex file_contains
 * created on:  2025-11-10 - 11:05 +0100
 * 1st author:  emma.ploton
 * description: domain that displays match found if it finds the arbitrary string in the file.
 */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char *strwrite(char *buffer)
{
    int i;

    i = 0;
    while (buffer[i] != '\0') {
        write(1, &buffer[i], 1);
        i = i + 1;
    }
    buffer[i] = '\n';
    write(1, &buffer[i], 1);
    return buffer;
}
