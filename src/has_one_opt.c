/*
 * E89 Pedagogical & Technical Lab
 * project: Projet Tr
 * created on:  2026-01-10 - 18:09 +0100
 * 1st author:  emma.ploton
 * description: Find one option
 */

#include <stddef.h>

const char *stu_strchr(const char *str, char c);

int has_one_opt(int ac, char **av, const char c)
{
    int i;
    const char *found;

    i = 0;
    while (i < ac) {
        if (av[i][0] == '-') {
            found = stu_strchr(av[i], chara);
            if (found != NULL) {
                return 1;
            }
        }
        i = i + 1;
    }
    return 0;
}

