/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float mark1, mark2, total = 0, average = 0; //Declare the variables

  printf("Enter mark 1 : ");
  scanf("%f", &mark1); //Input mark 1

  printf("Enter mark 2 : ");
  scanf("%f", &mark2); // Input mark 2

  total = mark1 + mark2; // Calculate total marks
  average = total / 2; // Calculate average marks

  printf("Average of the tow marks is : %.2f", average); // Display the average marks
  
  return 0;
}

