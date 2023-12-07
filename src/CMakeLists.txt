project(${PROJECT})

add_library(vigenere-cipher vigenere-cipher.c)

target_include_directories(
  vigenere-cipher
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include
)