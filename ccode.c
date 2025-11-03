#include <stdio.h>
int main() {
  int a = 36, b = 60;
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  printf("HCF = %d\n", a);
  return 0;
}
