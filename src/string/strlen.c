#include<stdio.h>

size_t my_strlen(char *str) {
  size_t ptr = 0;
  
  while(str[ptr] != '\0') {
    ptr++;
  }

  return ptr;
}
