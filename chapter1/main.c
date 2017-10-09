#include "characters.c"

int main(int argc, char* argv[]) {
    printf("1.SpecialChar\n2.ReplaceBlanks\n3.ReplaceSpecialChars\n4.OneWordPerLine\n5.LengthOfWords\n6.LengthOfInput\n");
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
            default:
                count_special_symbols();
                break;
        }
        input = getchar();
    }
    return 0;
}

