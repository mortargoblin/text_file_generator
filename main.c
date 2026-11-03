#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char rand_char() {
  return ' ' + rand() % 95;
}

int main(int argc, char **argv) {
  srand(time(NULL));

  int char_count = 1;
  if (argc > 1)
    char_count = atoi(argv[1]);

  long megabyte_count = char_count * 1048576;

  FILE *file = fopen("text", "w+");

  for (int i = 0; i < megabyte_count; i++)
    fprintf(file, "%c", rand_char());

  fclose(file);

  return 0;
}
