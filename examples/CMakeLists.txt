project(${PROJECT})

add_executable(vigenere main.c)

target_link_libraries(
  vigenere
  PRIVATE
  vigenere-cipher
)