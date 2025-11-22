int my_strcmpr(char *a, char *b) {
  if(my_strlen(a) != my_strlen(b)) return -1;
  for(int i = 0; i < my_strlen(a); i++) {
    if(a[i] != b[i]) return -1;
  }
  
  return 1;
}
