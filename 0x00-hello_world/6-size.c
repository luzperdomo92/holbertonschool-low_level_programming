#include<stdio.h>
int main(void)
{
  char charType;
  int intType;
  long int longintType;
  long long int longlongintType;
  float floatType;

  printf("Size of char: %ud byte\n", sizeof(charType));
  printf("Size of int: %ud bytes\n", sizeof(intType));
  printf("Size of long int: %ud bytes\n", sizeof(longintType));
  printf("Size of long long int: %ud bytes\n", sizeof(longlongintType));
  printf("Size of float: %ud bytes\n", sizeof(floatType));
  return (0);
}
