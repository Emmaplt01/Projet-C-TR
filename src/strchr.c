/*
 * E89 Pedagogical & Technical Lab
 * project: Chapitre 3 ex strchr
 * created on:  2025-11-02 - 14:08 +0100
 * 1st author:  emma.ploton
 * description: function that searches in the string passed as the first parameter, the character passed as the second parameter.
 */

const char *stu_strchr(const char *str, char c)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        if (str[i] == c) {
            return &str[i];
        }
        i = i + 1;
    }
    return 0;
}
