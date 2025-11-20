#include<stdio.h>

size_t strleng(char *str) {
  size_t ptr = 0;
  
  while(str[ptr] != '\0') {
    ptr++;
  }

  return ptr;
}
