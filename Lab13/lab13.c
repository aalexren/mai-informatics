#include <stdio.h>
#include "set.h"

char vowels[] = "AEIOUY";
char svowels[N];
char sconsonants[N];
char word[256], sword[N];

char to_upper(char c) {
    if (letter(c) && c >= a) return c - a + A;

    return c;
}

int main() {

    char c; create_set(vowels, svowels);
    int index = -1; int ans = 0, cons = 0;

    for (char i = A; i <= Z; i++) {
        if (!set_include(i, svowels)) set_insert(i, sconsonants);
    }

    while ((c = getchar()) != EOF) {
        if (letter(c)) {
            word[++index] = c;
            c = to_upper(c);
            if (set_include(c, sconsonants)) cons++;
        }
        else if (index > -1) {
            word[++index] = '\0';
            if (cons == 1) {
                printf("Слово содержащее ровно одну согласную: %s\n", word);
                ans++;
            }
            index = -1; cons = 0;
            for (int i = 0; i < 256; i++)
                word[i] = '\0';
        }
    }
    printf("Всего слов: %d\n", ans);

    return 0;
}