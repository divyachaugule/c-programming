#include<stdio.h>
<stdbool.h>
int main() {
  int a;
  double d;
  char c;
  bool b;
  printf("int :%zu bytes\n",sizeof(int));
  printf("char :%zu bytes\n",sizeof(char));
  printf("float :%zu bytes\n",sizeof(float));
  printf("double :%zu bytes\n",sizeof(double));
  printf("a :%zu bytes\n",sizeof(a));
  printf("d :%zu bytes\n",sizeof(d));
  printf("c :%zu bytes\n",sizeof(c));
  printf("bool :%zu bit\n",sizeof(bool));
  printf("b :%zu bit\n",sizeof(b));
  
  return 0 ;
 }
