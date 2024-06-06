#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    int len = 0, wordc = 0, cc = 0, wordcon = 0;
    int c;
    while (--argc > 0) {
        if ((fp = fopen(*++argv, "r")) == NULL) {
            printf("can't open %s\n", *argv);
            return 1;
        }
        else {
            while ((c = getc(fp)) != EOF) {
                putchar(c);
                cc++;
                if (c == '\n') {
                    len++;
                }
                if (isspace(c)) {
                    if (wordcon) {
                        wordc++;
                        wordcon = 0;
                    }
                }
                else {
                    wordcon = 1;
                }
            }
            if (wordcon) {
                cc++;
            }
            fclose(fp);
            printf("\n");
            printf("%d %d %d %s\n", len, wordc, cc, *argv);
        }
    }

    return 0;
}
