
#include <string.h>
#include <stdio.h>
#include "tokenizer.h"
#include "history.h"


int main(){

  
  while(1){
    char user[100];
    printf("> ");
    printf("Please enter a few words ");
    printf("\n");
    printf("> ");
    
    fgets(user, 100 , stdin);
    printf("%s",user);
    char **words = tokenize(user);
    printf("test");
    // print_tokens(words);
    if(user[0] == 'q'){
      break;
    }
  }
  return 0;
}
