#include<stdio.h>
int main() {
 int arr[7] = {12,23,2,5,10,6,20};
 int num = arr[0];
 for(int i=0; i < 7; i++) {
  if(num > arr[i]) {
  num = arr[i];
 }
}
printf("smallest number is = %d\n", num);
return 0;
}

