#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
  string  names[] = {"ahmed", "gamal", "mazen", "ali", "mai", "mariam", "sara"};
  //linear search
  for(int i = 0; i < 7; i++){
    if(strcmp(names[i],"ali") == 0){
      printf("found in %i\n", i+1);
      return 0;
    }
  }
  printf("not found\n");
  return 1;


}
