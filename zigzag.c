#include <stdio.h>
int main() {
    int charactersInLine, zigzagLines;
    printf("Number of characters in a line: ");
    scanf("%d", &charactersInLine);
    printf("Enter the number of zigzag lines: ");
    scanf("%d", &zigzagLines);
    for (int i = 1; i <= zigzagLines; i++) {
        for (int r = 1; r <= charactersInLine; r++) {
            for (int c = 1; c <= charactersInLine; c++) {
                if (r == c) {
                    printf("%d ", r);
                } else {
                    printf("  ");
                }
            }
            printf("\n");
        }
        for (int r = 1; r <= charactersInLine; r++) {
            for (int c = 1; c <= charactersInLine; c++) {
                if (c <= (charactersInLine + 1 - r)) {
                    if (c == (charactersInLine + 1 - r)) {
                        printf("%d ", r);
                    } else {
                        printf("  ");
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
