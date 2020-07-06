#include <stdio.h>

template <typename T>
void dump(const T& str)
{
  for (char ch : str) {
    printf(
      "%.2x ",
      static_cast<unsigned char>(ch));
  }
  putchar('\n');
}

int main()
{
  char str[] = "我";
  char u8str[] = u8"我";
  dump(str);
  dump(u8str);
}