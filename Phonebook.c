#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct phonebook{
  string name;
  string numbers;
}pb;

int main(void)
{
  pb people[2];

  people[0].name = "ahmed";
  people[0].numbers = "0101010";

  people[1].name = "david";
  people[1].numbers = "4040404";

  for (int i = 0; i < 2; i++){
    if(strcmp(people[i].name, "ahmed") == 0){
      printf("found %s\n", people[i].numbers);
      return 0;
    }
  }
  printf("not found \n");
  return 1;
}
