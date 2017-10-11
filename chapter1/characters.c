#include <stdio.h>

#define ASCII 127

/**
 * 1.8
 * Counts blanks, tabs, and new lines.
 * Outputs them in console.
 */
void count_special_symbols() {
    int c, blanks = 0, tabs = 0, lines = 0;
    int arr[3];

    while ((c = getchar()) != EOF)
        if (c == ' ') ++blanks;
        else if (c == '\t') ++tabs;
        else if (c == '\n') ++lines;
    printf("Blanks:%d Tabs:%d Lines:%d", blanks, tabs, lines);
}

/**
 * 1.9
 * Replace blanks with "blank" word.
 */
void replace_blanks() {
    int c;
    int blanks = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            if (blanks > 0) {
                printf("blank");
            }
            blanks = 0;
        } else if (c == ' ') {
            ++blanks;
        }
    }
}

/**
 * 1.10
 * Replace special symbols like /t, /b and outputs result.
 */
void replace_special_chars() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        }
    }
}

/**
 * 1.12
 * Print one word per line from input.
 */
void print_one_word_per_line() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == '\n' || c == ' ') {
            putchar('\n');
        } else {
            putchar(c);
        }
    }
}

/**
 * 1.13
 * Prints histogram of length of the words in input.
 */
void print_length_of_words_histogram() {
    int c;
    int counter = 0;

    while ((c = getchar()) != EOF) {
        if ((c == '\n' || c == ' ' || c == '\t') && counter != 0) {
            printf("%d\n", counter);
            counter = 0;
        } else if (c != '\n') {
            ++counter;
        }
    }
}

/**
 * 1.14
 * Counts chars in input.
 */
void char_freq() {
    int c;
    int arr[ASCII];

    //fill array with 0
    for (int i=0; i < ASCII; i++) {
        arr[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        ++arr[c];
    }

    for (int i=0; i < ASCII; i++) {
        if (arr[i] != 0 && i != '\b' && i != '\t' && i != '\n') {
            printf("%c: %d\n", i, arr[i]);
        }
    }
}
