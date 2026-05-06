/*
 * E89 Pedagogical & Technical Lab
 * project: Project TR
 * created on:  2025-12-18 - 15:46 +0100
 * 1st author:  emma.ploton
 * description: conservation
 */

int find(int c, char *opt_d )
{
    int i;

    i = 0;
    while (opt_d[i] != '\0') {
        if (c == opt_d[i]) {
            return 1;
        }
        i = i + 1;
    }
    return 0;
}

