#include <stdio.h>
#include <stdlib.h>

int sayfizzbuzz(int number);
int divby(int number, int divisor);

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("number was not provided\n");
    return 0;
  }

  return sayfizzbuzz(atoi(argv[1]));
}

int sayfizzbuzz(int number) {
  if (divby(number, 15)) {
    printf("%d: fizzbuzz\n", number);
  } else if (divby(number, 5)) {
    printf("%d: buzz\n", number);
  } else if (divby(number, 3)) {
    printf("%d: fizz\n", number);
  } else {
    printf("number %d neither fizzed nor buzzed\n", number);
  }

  return 0;
}

int divby(int number, int divisor) {
  return number % divisor == 0;
}
