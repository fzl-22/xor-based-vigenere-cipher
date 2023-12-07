#include <stddef.h>
#include <string.h>

void vigenere_cipher(char *input_str, char* key_str, char *output_str){
  size_t input_len = strlen(input_str);
  size_t key_len = strlen(key_str);

  for(int i = 0; i < input_len; i++) {
    output_str[i] = input_str[i] ^ key_str[i % key_len];
  }

  output_str[input_len] = '\0';
}

void print_string_info(char* prefix, char *str) {
    size_t str_len = strlen(str);

    printf("%s:\n", prefix);
    printf("Char\tInteger\tBinary\n");

    for (size_t i = 0; i < str_len; i++) {
        printf("%c\t%d\t", str[i], (int)str[i]);

        for (int j = 7; j >= 0; j--) {
            printf("%d", (str[i] >> j) & 1);
        }

        printf("\n");
    }
    printf("\n");
}
