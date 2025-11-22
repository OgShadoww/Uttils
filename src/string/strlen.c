#include<stdio.h>

size_t my_strlen(char *str) {
  const char *s = str;
  
  while(*s) s++;

  return s - str;
}
