#include<stdio.h>

char *my_strcpy(char *dest, const char *src) {
  char *d = dest;

  while((*d++ = *src++));

  return dest;
}
