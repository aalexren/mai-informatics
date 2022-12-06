#include <stdio.h>
#include "set.h"

char vowels[] = "AEIOUYaeiouy";
char svowels[2 * N];
char word[256], sword[2 * N];
char sdiff[2 * N];

int main() {

    char c; create_set(vowels, svowels);
    int index = -1;

    while ((c = getchar()) != EOF) {
        if (letter(c)) {
            word[++index] = c;
        }
        else {
            word[++index] = '\0';
            printf("Текущее слово: %s", word);
            create_set(word, sword);
            display_set(sword);
            set_diff(sword, svowels, sdiff);
            display_set(sdiff);
            if (set_size(sdiff) == 1 && index > 0)
                printf("Слово содержащее ровно одну согласную: %s\n", word);
            index = -1;
        }
    }

    return 0;
}