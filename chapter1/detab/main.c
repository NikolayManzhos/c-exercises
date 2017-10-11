#include <stdio.h>

#define TAB_STOP 4
/**
 * 1.20
 * Replace tabs with special blank symbol.
 */
int main(int argc, char* argv[]) {
    int c;
    int col = 1;

    while ((c=getchar()) != EOF) {
        if (c == '\t') {
            int shift = TAB_STOP - ((col - 1)%TAB_STOP);
            while (shift > 0) {
                putchar('|'); //blank space
                ++col;
                --shift;
            }
        } else if (c == '\n') {
            putchar(c);
            col = 1;
        } else {
            putchar(c);
            col++;
        }
    }

    return 0;
}
