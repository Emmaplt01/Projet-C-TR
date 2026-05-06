/*
 * E89 Pedagogical & Technical Lab
 * project: Project tr
 * created on:  2025-12-16 - 15:12 +0100
 * 1st author:  emma.ploton
 * description: function read and show
 */

#include <unistd.h>
#include <stdlib.h>

char find(int c, char *opt_d);
char *has_opt_value(int ac,  char **av, const char c);

int tr_delete(int ac ,char **av)
{
    int i;
    char *buffer;
    char *str;
    char *opt_d;

    opt_d = has_opt_value(ac, av, 'd');
    i = 0;
    if (opt_d) {
        buffer = malloc(sizeof(char) * 100);
        str = malloc(sizeof(char) * 100);
        buffer[read(0, buffer, 99)] = '\0';
        while (buffer[i] != '\0') {
            if (find(buffer[i], opt_d) == 0) {
                str[i] = buffer[i];
                write(1, &str[i], 1);
            }
            i = i + 1;
        }
        str[i] = '\0';
        free(buffer);
        free(str);
        return 0;
    }
    return 0;
}
