#include <stdio.h>

int main(int argc, char** argv) {
  char c;

  while((c = getchar()) != EOF) {
    putchar(c ^ 255);
  }

  return 0;
}
