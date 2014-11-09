#include <stdio.h>

int collapsestring(char *string, int x);

int main(int argc, char **argv) {
  if(argc > 2) {
    perror("Only submit one URL, please.");
  }

  char *url = *(argv + 1);
  printf("%s\n", url);

  char b;
  int x;
  for(x = 0; (b = *(url + x)) != '\0'; x++) {
    printf("%s\n", "yes");
    if(b == '\\') {
      printf("%s\n", "no");
      collapsestring(url, x);
    }
  }

  return 0;
}

// I'll need some recursion up in this eventually.

int collapsestring(char *string, int x) {
  for(x = x; *(string + x) != '\0'; x++) {
    *(string + x) = *(string + (x + 1));
  }
  printf("%s%s\n", "Collapse: ", string);
  return 0;
}
