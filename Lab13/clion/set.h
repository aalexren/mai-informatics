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
  for(int i = 0; i < 2 * N; i++) s[i] = 0;
  for(int i = 0; i < 2 * N; i++) {
    c = w[i];
    if(c >= a && c <= z) s[c-a+N] = 1;
    else if(c >= A && c <= Z) s[c-A] = 1;
  }

  return 0;
}

int display_set(char s[]) {
  char alph[2 * N];
  alph[0] = A; alph[N] = a; alph[2 * N - 1] = 0;

  for(int i = 1; i < N; i++) {
    alph[i] = alph[i-1] + 1;
    alph[i+N] = alph[i+N-1] + 1;
  }

  printf("\n%s\n", alph);
  for(int i = 0; i < 2 * N; i++) printf("%1d",s[i]); printf("\n");

  return 0;
}

int equal_set(char s1[], char s2[]) {
  for(int i = 0; i < 2 * N; i++) if(s1[i] != s2[i]) return 0;

  return 1;
}

int union_set(char s1[], char s2[], char s3[]) {
  for(int i = 0; i < 2 * N; i++)
    s3[i] = s1[i] || s2[i];

  return 0;
}

int inters_set(char s1[], char s2[], char s3[]) {
  for(int i = 0; i < 2 * N; i++) s3[i] = s1[i] && s2[i];

  return 0;
}

int include_set(char s1[], char s2[]) {
  for(int i = 0; i < 2 * N; i++)
    if(s1[i] == 1 && s2[i] == 0) return 0;

  return 1;
}

int empty_set(char s[]) {
  for(int i = 0; i < 2 * N; i++)
    if(s[i] == 1) return 0;

  return 1;
}

int in_set(char c, char s[]) {
  if(letter(c)) {
    if(c >= a) s[c-a] = 1;
    else s[c+N-A] = 1;
  }

  return 0;
}

int set_in(char c, char s[]) {
  printf("%c %d %d\n", c, c-A, c-a+N);
  if (s[c-A] || s[c-a+N]) return 1;

  return 0;
}

int set_size(char s[]) {
  int count = 0;
  for (int i = 0; i < 2 * N; i++) {
    if (s[i]) count++;
  }

  return count;
}

int set_diff(char s1[], char s2[], char s3[]) {
  for (int i = 0; i < 2 * N; i++) {
    s3[i] = s1[i] * !s2[i];
  }

  return 0;
}