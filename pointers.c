#include <stdint.h> //gives uint8_t etc
#include <stdlib.h> //gives malloc + free
#include <stdio.h> //give printf
#include <stdbool.h>
//function by copy
//

//function by ref
//

int main(){
  bool is_cool = true;
  bool *pointer_to_is_cool = &is_cool;

  *pointer_to_is_cool = false; //where the magic is happening 

  bool is_cool_copy = is_cool; //is_cool_copy will be **false**
  printf("is cool copy equals %d\n", is_cool_copy);
  printf("is cool equals %d\n", is_cool);

  //create an int.
  //
  //create a pointer to an int
  //
  //modify the int through the pointer
  //

  //call an 'ordinary' c function that takes args by copy.
  //

  //call a function that can take a reference to a number and adds one to the number passed in. Print out the number from `main` to be sure it is modified.
  //
  
  
  //create an array of integers
  //
  //create a pointer to the first element in the array
  //
  //use `*` syntax and arithmetic to get the second element in the array.
  //
  //use `[]` syntax to get the second element in the array.
  //
}
