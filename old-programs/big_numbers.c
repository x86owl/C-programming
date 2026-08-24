#include <stdio.h>
#include <stdlib.h>

void big_numbers(int number);

int main(void) {
  int arr[] = {1,3,5,6,7,37,35,23,75,12};

  ssize_t size = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < size; i++) {
    big_numbers(arr[i]);
  }
  return EXIT_SUCCESS;
}

void big_numbers(int number) {
  if (number > 15) {
    fprintf(stdout, "%d is bigger number\n", number);
  }
}
