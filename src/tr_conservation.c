/*
 * E89 Pedagogical & Technical Lab
 * project: Project tr
 * created on:  2025-12-18 - 15:46 +0100
 * 1st author:  emma.ploton
 * description: reads and displays
 */
#include <unistd.h>
#include <stdlib.h>

char find(int c, char *opt_d);
char *has_opt_value(int ac,  char **av, const char c);

char *line_break(char *opt_d);

int *tr_conservation(int ac ,char **av)
{
    char *opt_d;
    char *buffer;
    int i;

    i = 0;
    opt_d = has_opt_value(ac, av, 'd');
    if (opt_d) {
        opt_d = line_break(opt_d);
    }
    if (!opt_d || !has_opt_value(ac, av, 'c')) {
        free(opt_d);
        return 0;
    }
    buffer = malloc(100);
    read(0, buffer, 99);
    buffer[99] = '\0';
    while (buffer[i] != '\0') {
        if (find(buffer[i], opt_d)) {
            write(1, &buffer[i], 1);
        }
        i = i + 1;
    }
    free(buffer);
    free(opt_d);
    return 0;
}


