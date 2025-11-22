#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int *wc(char *file_p) {
  FILE *file = fopen(file_p, "r");
  if(!file) {
    perror("Error opening file");
    exit(0);
  }
  char buff[256];
  int spaces = 0;
  int chr = 0;
  int words = 0;
  
  while(fgets(buff, 256, file)) {
    int w = strlen(buff) - 1;
    int IN_WORD = 0;;

    while(w >= 0) {
      if(buff[w] == ' ' && IN_WORD == 0) {
        spaces++;
        w--;
        continue;
      }
      else if(((buff[w] >= 'A' && buff[w] <= 'Z') || (buff[w] >= 'a' && buff[w] <= 'z')) && IN_WORD == 0) {
        IN_WORD = 1;
        chr++;
        w--;
        continue;
      }
      else if(((buff[w] >= 'A' && buff[w] <= 'Z') || (buff[w] >= 'a' && buff[w] <= 'z'))) {
        chr++;
        w--;
        continue;
      }
      else if(buff[w] == ' ' && IN_WORD == 1) {
        words++;
        spaces++;
        IN_WORD = 0;
        w--;
        continue;
      }
      w--;
    }
    if(IN_WORD == 1) words++;
  }
  int *res = malloc(sizeof(int)*3);
  if(!res) {
    perror("Error malloc");
    exit(-1);
  }
  res[0] = spaces;
  res[1] = chr;
  res[2] = words;

  fclose(file);

  return res;
}

int main(int arg, char **argc) {
  int *arr = wc(argc[1]);
  printf("Spaces: %d\t Characters: %d\t Words: %d\n", arr[0], arr[1], arr[2]);

  return 0;
}
