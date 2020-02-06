#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char charType;
  int intType;
  long int longintType;
  long long int longlongintType;
  float floatType;

  printf("Size of a char: %ud byte(s)\n", sizeof(charType));
  printf("Size of an int: %ud byte(n)\n", sizeof(intType));
  printf("Size of a long int: %ud byte(s)\n", sizeof(longintType));
  printf("Size of a long long int: %ud byte(s)\n", sizeof(longlongintType));
  printf("Size of a float: %ud byte(s)\n", sizeof(floatType));
  return (0);
}
