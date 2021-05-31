/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** get a number from a string
*/

int int_max(long long int nb, int i, char const *str)
{
    long long int max = 9223372036854775807 - nb;

    if (nb * 10 + str[i] - '0' > max)
        return (1);
    else
        return (0);
}

int sign(char const *str)
{
    int nb_minus = 0;

    for (int x = 0; str[x] != '\0'; x += 1) {
        if (str[x] == '-')
            nb_minus += 1;
    }
    if (nb_minus % 2 != 0)
        return (1);
    else
        return (0);
}

long long int my_getnbr(char const *str)
{
    long long int nb = 0;
    int power = 0;

    for (int i = 0; str[i] != '\0'; i += 1) {
        while (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10 + str[i] - '0';
            i += 1;
            if (int_max(nb, i, str) == 1)
                return (0);
        }
        if (nb != 0) {
            if (sign(str) == 1) {
                nb *= -1;
                return (nb);
            } else
                return (nb);
        }
    }
    return (0);
}
