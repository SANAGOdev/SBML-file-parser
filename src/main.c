/*
** EPITECH PROJECT, 2022
** SBML-file-parser
** File description:
** main.c
*/

#include "header.h"

int main(void)
{
    char **word_array = my_str_to_word_array_synthesis("salut ça va ?");
    int i = 0;
    while (word_array[i] != NULL) {
        printf("[%s]\n", word_array[i]);
        i++;
    }
    return 0;
}
