#include <stdio.h>

/*
    Read a set of values from the user.
    Store the sum in the sum variable and return the number of values read.
*/

// You CANNOT declare any global  variables
// You CANNOT change the definition of the read_values function (e.g., add/remove function parameters, or change the return type)
int read_values(double sum) {
  int values = 0, input = 0;
  sum = 0;
  printf("Enter input values (enter 0 to finish):\n");
  scanf("%d", &input);
  while(input != 0) {
    values++;
    sum += input;
    scanf("%d", input);
  }
  return values;
}

int main() {
  double sum = 0;
  int values;
  values = read_values(sum);
  printf("\nAverage: %g\n", sum/values); // Hint: How do we ensure that sum is updated here AFTER read_value manipulates it?
  return 0;
}

