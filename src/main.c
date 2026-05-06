/*
 * E89 Pedagogical & Technical Lab
 * project: Projetc TR
 * created on:  2025-12-24 - 08:58 +0100
 * 1st author:  emma.ploton
 * description: main
 */

#include <stdlib.h>
#include <unistd.h>

int tr_translate(char **av);
int tr_delete(int ac, char **av);
int tr_conservation(int ac, char **av);
char *show_help(int ac, char **av);

int main(int ac, char **av)
{
    char *res;
    int a;

    if (ac >= 2) {
        res = show_help(ac, av);
        if (res) {
            return 0;
        }
        a = tr_conservation(ac, av);
        if (a) {
            return 0;
        }
        a = tr_delete(ac, av);
        if (a) {
            return 0;
        }
        if (ac >= 3) {
            a = tr_translate(av);
            if (a) {
                return 0;
            }
        }
    }
    return 1;
}
