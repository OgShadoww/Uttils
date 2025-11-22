#include<stdio.h>

char *my_strcat(char *dest, const char *src) {
  char *d = dest;
  
  while(*d) d++;
  
  while((*d++ = *src++));
  
  return dest;
}
