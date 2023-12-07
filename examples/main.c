/*
Nama  : Ahmad Mu'min Faisal
NIM   : 1203210101
Kelas : IF-01-02

Deskripsi : Project ini merupakan project Vigenere Cipher berbasis operasi XOR yang dibuat menggunakan bahasa C dan CMake build system generator. Cipher ini memanfaatkan operasi XOR dari bit-bit setiap karakter dari sebuah plain text dengan bit-bit setiap karakter dari key-nya.
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vigenere-cipher/vigenere-cipher.h"

int main(int argc, char *argv[]) {
  // jika jumlah argument tidak sama dengan 3, program keluar
  if (argc != 3) {
    printf("Usage: %s <input_string> <key_string>\n", argv[0]);
    return 1;
  }

  // definisi input, key, encrypted, dan decrypted string
  char *input_string = argv[1];
  char *key_string = argv[2];
  char *encrypted_string = (char *)malloc(strlen(input_string) + 1);
  char *decrypted_string = (char *)malloc(strlen(input_string) + 1);

  // print info input string
  print_string_info("Input String", input_string);

  // enkripsi input string menggunakan key string, simpan hasilnya di encrypted string
  vigenere_cipher(input_string, key_string, encrypted_string);

  // print info encrypted string
  print_string_info("Encrypted String", encrypted_string);

  // dekripsi encrypted string menggunakan key string, simpan hasilnya di decrypted string
  vigenere_cipher(encrypted_string, key_string, decrypted_string);

  // print info decrypted string
  print_string_info("Decrypted String", decrypted_string);
  
  return 0;
}
