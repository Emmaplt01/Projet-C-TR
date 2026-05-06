/*
 * E89 Pedagogical & Technical Lab
 * project: Project tr
 * created on:  2025-12-08 - 14:48 +0100
 * 1st author:  emma.ploton
 * description: simple translate
 */

char match(int c, char **av)
{
    int i;

    i = 0;
     while (av[1][i] != '\0' && av[2][i] !='\0') {
        if (c == av[1][i]) {
            c = av[2][i];
            return c;
        }
        i = i + 1;
     }
    return c;
}

