#include <stdio.h>

#define space ' '
#define comma ','
#define tab '\t'
#define ends '\0'
#define end EOF
#define nline '\n'

int main() {
  char c = ' ';
  int counter = 0, words = 0;

  while (c != end) {
    c = getchar();
    if (c != space && c != comma && c != tab && c != ends && c != end && c != nline) {
      counter++;
    }
    else {
      if (counter >= 3) words++;
      counter = 0;
    }
  }
  
  printf("Количество слов не менее 3-х символов = %d\n", words);
  return 0;
}