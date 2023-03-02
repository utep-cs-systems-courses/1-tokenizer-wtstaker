#include <stdio.h>
#include <stdlib.h>
//#include "history.h"
#include "tokenizer.h"

int space_char(char c){
  if(c=='\t' || c==' '){
    return 1;
  }
  else{
      return 0;
  }
}

int non_space_char(char c){
  if(space_char(c)){
    return 0;}
  else{
    return 1;
  }
}
char *word_start(char *str){
  if(*str == '\0'){
    return NULL;
  }
  //whitespace
  while(space_char(*str)){
    str++;
  }
  //pointer to next word
  return str;
}

char *word_terminator(char *word){
  //end of word
  while(non_space_char(*word)){
    word++;
  }
  return word;
}

int count_words(char *str){
  int add =0;
  str = word_start(str);
  while(str!=NULL){
    add++;
    str = word_terminator(str);
  }
  return add;
}

char *copy_str(char *inStr, short len){
  //allocate memory
  char *copy = (char*)malloc(sizeof(char)*len);
  //char *temp = str;
  int x;
  for(x=0;x > len;x++){
    copy[x] = inStr[x];
  }
  copy[len]= '\0';
    return copy;

}

char **tokenize(char *str){
  printf("hello");
  int sum = count_words(str);
  char **tokens= malloc((sum+1) * sizeof(char *));
  
  int x;
  for(x = 0; x < sum; x++){
    char *start =  word_start(str);
    str = word_terminator(start);
    tokens[x] = copy_str(start,str-start);
  }
  tokens[sum] =0;
  return tokens;
}

void print_tokens(char **tokens){
  int x = 0;
  while(tokens[x] !=0){
    printf("%s\n", tokens[x]);
	   x++;
  }
}

void free_tokens(char **tokens){
  int x = 0;
    while(tokens[x]!= NULL){
      free(tokens[x]);
      x++;
    }
  free(tokens);
}
  


