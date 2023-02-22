#include <string.h>
#include <stdio.h>
#include "tokenizer.h"
#include "history.h"


int main(){

  char str[400];
  while(1){

    printf("> ");
    printf("Please enter a few words ");
    printf("\n");
    printf("> ");
    fgets(str,sizeof(str), stdin);
    printf("%s", str);
    break;
  }
  return 0;
}
