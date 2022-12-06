#define N 26

char A='A';
char Z='Z';
char a='a';
char z='z';


int letter(char c) {
  return (c >= a && c <= z) || (c >= A && c <= Z);
}


int create_set(char w[], char s[]) {
  char c;
  for(int i = 0; i < N; i++) s[i] = 0;
  for(int i = 0; i < N; i++) {
    c = w[i];
    if (letter(c)) s[c-A] = 1;
  }

  return 0;
}

int display_set(char s[]) {
  printf("\n");
  for (int i = 0; i < N; i++) printf("%c", i + A); printf("\n");
  for (int i = 0; i < N; i++) printf("%d", s[i]); printf("\n");

  return 0;
}

int set_insert(char c, char s[]) {
  s[c-A] = 1;

  return 0;
}

int set_include(char c, char s[]) {
  if (s[c-A] > 0) return 1;

  return 0;
}