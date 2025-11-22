#include<stdio.h>

size_t my_strlen(char *str);

char *my_strcat(char *str1, char *str2) {
  size_t str1_l = my_strlen(str1);
  size_t str2_l = my_strlen(str2);

  for(int i = str1_l; i < str1_l + str2_l; i++) {
    str1[i] = str2[i - str1_l];
  }
  str1[str1_l+str2_l] = '\0';
  
  return str1;
}


