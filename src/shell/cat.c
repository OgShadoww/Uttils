#include<stdio.h>

void cat(char *file_p) {
  FILE *file = fopen(file_p, "r");
  char buff[128];

  while(fgets(buff, 128, file)) {
    printf("%s", buff);
  }
}
