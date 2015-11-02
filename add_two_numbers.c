#include<stdio.h>

int add_two_numbers(int first_number, int second_number){
  int result = first_number + second_number;
  return result;
}

int main(){
  printf("%i",add_two_numbers(3,5));
  return 0;
}
