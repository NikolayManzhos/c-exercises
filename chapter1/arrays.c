#define MAX_LENGTH 1000
#define LARGE_LINE 80

/**
 * 1.17
 * Prints all input lines which are larger than 80 characters.
 */
void print_only_large_line() {
    int c;
    int count = 0;
    int line[MAX_LENGTH];

    while ((c = getchar()) != EOF && count <= MAX_LENGTH) {
        if (c == '\n') {
            if (count > LARGE_LINE) {
                for (int i=0; i < count; i++) {
                    putchar(line[i]);
                }
            }
            count = 0;
        } else {
            line[count] = c;
            ++count;
        }
    }
}


/**
 * 1.18
 * Removes trailing blanks and tabs from each input line, if line entirely blank it should not be printed.
 */
void remove_tail_stuff() {
    int c;
    int lastChar = ' ';
    int count = 0;
    int line[MAX_LENGTH];

    while ((c = getchar()) != EOF) {
        if (c == '\n' && count > 0) {
            if (lastChar == ' ' || lastChar == '\t') {
                for (int i=0; i < count - 1; i++) {
                    putchar(line[i]);
                }
            } else {
                for (int i=0; i < count; i++) {
                    putchar(line[i]);
                }
            }
            count = 0;
            lastChar = ' ';
        } else {
            line[count] = c;
            lastChar = c;
            ++count;
        }
    }
}

