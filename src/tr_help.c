/*
 * E89 Pedagogical & Technical Lab
 * project: Projet TR
 * created on:  2025-12-24 - 08:51 +0100
 * 1st author:  emma.ploton
 * description: tr help
 */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char *has_one_opt(int ac, char **av, const char c);
char *strwrite(char *buffer);

char *show_help(int ac ,char **av)
{
    int fd;
    int n;
    char *buffer;

    if (!has_one_opt(ac, av, 'h')) {
        return NULL;
    }
    fd = open("./src/help.txt", O_RDONLY);
    if (fd < 0) {
        return NULL;
    }
    buffer = malloc(1431);
    if (!buffer) {
        close(fd);
        return NULL;
    }
    n = read(fd, buffer, 1430);
    buffer[n] = '\0';
    strwrite(buffer);
    close(fd);
    free(buffer);
    return 0;
}

