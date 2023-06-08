/*
** EPITECH PROJECT, 2022
** SBML-file-parser
** File description:
** requirement.c
*/

#include "header.h"

static int count_words(const char *str);
static char *extract_word(const char *str, int start, int length);

char **my_str_to_word_array_synthesis(const char *str)
{
    int count = count_words(str);
    int i = 0;
    char **word_array = malloc(sizeof(char *) * (count + 1));
    int y = 0, start = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            int length = i - start;
            word_array[y] = extract_word(str, start, length);
            y++;
            start = i + 1;
        }
    }
    int length = i - start;
    word_array[y] = extract_word(str, start, length);
    return word_array;
}

static int count_words(const char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            count++;
    }
    return count;
}

static char *extract_word(const char *str, int start, int length)
{
    char *word = malloc(sizeof(char) * (length + 1));
    for (int j = 0; j < length; j++)
        word[j] = str[start + j];
    word[length] = '\0';
    return word;
}
