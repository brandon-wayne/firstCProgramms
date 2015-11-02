#include<stdio.h>

int main(int argc, char** argv){
  //this is a for loop
  for(int i = 0; i < 4; i++){
    puts("This is a for loop!");
  }
  puts("\n");
  // syntax of a while loop
  int k = 0;
  while(k<4){
    puts("this is a valid while loop");
    k++;
  }
  puts("\n");
  //syntax of a do while loop
  int j = 0;
  do{
    puts("This is a do while loop!");
    j++;
  }while(j < 4);

  return 0;
}

int add_numbers(int x, int y){
  int result =  x + y;
  return result;
}
