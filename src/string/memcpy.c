void my_memcpy(char *dest, char *source, size_t byte) {
  for(int i = 0; i < byte; i++) {
    dest[i] = source[i];
  }
}
