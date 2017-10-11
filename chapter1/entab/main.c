#include <stdio.h>

#define TAB_STOP 4
/**
 *
 * Replace blanks with tabs or spaces according to state of current TAB_STOP.
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char* argv[]) {
    int c;
    int col = 1;
    int blanks = 0;

    while ((c=getchar()) != EOF) {
        if (c == ' ') {
            blanks++;
        } else if (c == '\t') {
            blanks += 4;
        } else if (c == '\n') {
            int b_left = TAB_STOP - ((col-1) % TAB_STOP); // Blanks left to closest TAB_STOP
            while (b_left > 0 && blanks > 0) {
                if (b_left >= TAB_STOP) {
                    putchar('_'); //stands for TAB
                    blanks -= 4;
                    b_left -= 4;
                } else {
                    putchar('#'); // stands for blank
                    --blanks;
                    --b_left;
                }
            }
            putchar(c);
            col = 1;
        } else {
            putchar(c);
            col++;
        }
    }

    return 0;
}
