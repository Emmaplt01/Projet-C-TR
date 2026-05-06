/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 4 ex has_opt_value
 * created on:  2025-11-12 - 09:55 +0100
 * 1st author:  emma.ploton
 * description: The function takes as parameters argc, argv and a character representing the option to be found.
 */

#include <stddef.h>

const char *stu_strchr(const char *str, char c);

char *has_opt_value(int ac, char **av, const char c)
{
    int i;

    i = 0;
    while (i < ac) {
        if (av[i][0] == '-') {
            if (stu_strchr(av[i], chara) != NULL) {
                if (i + 1 < ac && av[i + 1][0] != '-') {
                    return av[i + 1];
                }
                return NULL;
            }
        }
        i = i + 1;
    }
    return NULL;
}
