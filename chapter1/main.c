#include <stdio.h>
#include "characters.c"
#include "arrays.c"

int main(int argc, char* argv[]) {
    printf("1.SpecialChar\n"
                   "2.ReplaceBlanks\n"
                   "3.ReplaceSpecialChars\n"
                   "4.OneWordPerLine\n"
                   "5.LengthOfWords\n"
                   "6.LengthOfInput\n"
                   "7.LargeLine\n"
                   "8.RemoveTailStuff\n");
    int input;
    input = getchar();
    while (input != 'E') {
        switch (input) {
            case '1':
                count_special_symbols();
                break;
            case '2':
                replace_blanks();
                break;
            case '3':
                replace_special_chars();
                break;
            case '4':
                print_one_word_per_line();
                break;
            case '5':
                print_length_of_words_histogram();
                break;
            case '6':
                char_freq();
                break;
            case '7':
                print_only_large_line();
                break;
            case '8':
                remove_tail_stuff();
                break;
            default:
                break;
        }
        input = getchar();
    }
    return 0;
}

