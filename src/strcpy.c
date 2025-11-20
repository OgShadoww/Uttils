void strcpyo(char *dest, char *source) {
  int i = 0;
  
  while(source[i] != '\0') {
    dest[i] = source[i];
    i++;
  }
  dest[i] = '\0';
}
