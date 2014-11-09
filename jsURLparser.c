#include <stdio.h>

int collapsestring(char *string, int x);

int main(int argc, char **argv) {

  if(argc > 2) {
    perror("Only submit one URL, please.");
  }

  char *url = *(argv + 1);

  char b;
  int x;
  for(x = 0; (b = *(url + x)) != '\0'; x++) {
    if(b == '\\') {
      collapsestring(url, x);
    }
  }

  printf("%s\n", url);

  return 0;
}

int collapsestring(char *string, int x) {

  for(; *(string + x) != '\0'; x++) {
    *(string + x) = *(string + (x + 1));
  }

  return 0;
}
