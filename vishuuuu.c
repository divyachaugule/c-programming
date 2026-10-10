#include<stdio.h>
int main() {
 int age;
printf("Enter age : ");
scanf("%d",&age);
if( age >= 18){
  printf( "Person is Adult\n");
 }
 else {
  printf("Person is Minor\n");
}
return 0;
}
