#include<stdio.h>
int main() {
      double first, second, temp;
      printf("Enter first number: ");
      scanf("%lf", &first);
      printf("Enter second number: ");
      scanf("%lf", &second);

      // Value of first is assigned to temp
      temp = first;

      // Value of second is assigned to first
      first = second;

      // Value of temp (Initial value of first) is assigned to second
      second = temp;

      printf("\nAfter swapping, FirstNumber = %.2lf\n", first);
      printf("After swapping, SecondNumber = %.2lf", second);
      return 0;
}
