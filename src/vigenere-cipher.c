/*
header source file dari vigenere-cipher
*/

#include <stddef.h>
#include <string.h>
#include <stdio.h>

/*
fungsi untuk melakukan enkripsi dan dekripsi pada [input_str] menggunakan [key_str], menghasilkan [output_str]
*/
void vigenere_cipher(char *input_str, char* key_str, char *output_str){
  size_t input_len = strlen(input_str);
  size_t key_len = strlen(key_str);

  for(int i = 0; i < input_len; i++) {
    output_str[i] = input_str[i] ^ key_str[i % key_len];
  }

  output_str[input_len] = '\0';
}

/*
  fungsi untuk mencetak setiap karakter pada [str] dalam format char, decimal, dan binary beserta tambahan [prefix] 
*/
void print_string_info(char* prefix, char *str) {
    size_t str_len = strlen(str);

    printf("%s:\n", prefix);
    printf("Char\tDecimal\tBinary\n");

    for (size_t i = 0; i < str_len; i++) {
        printf("%c\t%d\t", str[i], (int)str[i]);

        for (int j = 7; j >= 0; j--) {
            printf("%d", (str[i] >> j) & 1);
        }

        printf("\n");
    }
    printf("\n");
}
