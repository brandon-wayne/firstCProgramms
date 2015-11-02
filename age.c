#include<stdio.h>

int main(int argc, char** argv){
  printf("%s","Please enter your age: ");
  int age;
  scanf("%i", &age);
  int *age_pointer = &age;
  printf("%i\n", age_pointer );

  switch (age) {
    case  18:{
      printf("%s\n","This is definately a freshman");
    }
    case 19:{
      printf("%s\n", "This might be a sophomore");
    }
    case 20:{
      printf("%s\n", "This is a junior");
    }
    case 21:{
      printf("%s\n", "This is a senior");
    }
  }
}
