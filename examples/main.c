#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vigenere-cipher/vigenere-cipher.h"

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Usage: %s <input_string> <key_string>\n", argv[0]);
    return 1;
  }

  char *input_string = argv[1];
  char *key_string = argv[2];
  char *encrypted_string = (char *)malloc(strlen(input_string) + 1);

  print_string_info("Input String", input_string);

  vigenere_cipher(input_string, key_string, encrypted_string);

  print_string_info("Encrypted String", encrypted_string);

  char *decrypted_string = (char *)malloc(strlen(input_string) + 1);

  vigenere_cipher(encrypted_string, key_string, decrypted_string);

  print_string_info("Decrypted String", decrypted_string);
  return 0;
}
