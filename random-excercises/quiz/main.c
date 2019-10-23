#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "questions.c"
#define clear() printf("\033[H\033[J")


void showIntro() {
  clear();
  printf("\n\n\n\n\n\n\n\t\t\t------------------------------\n");

  printf("\033[32;5;20m \t\t\tWelcome to the GSH Quiz game! \033[0m");

  printf("\n\t\t\t------------------------------\n");
  printf("\n\t\t\t Ready to play?\n");

  printf("\n\t\t\t > Press S to start");
  printf("\n\t\t\t > Press Q to quit\n");


  char input[1];
  scanf("%s", input);

  clear();

  if(strlen(input) == 1) {
    if(toupper(input[0]) == 'S'){
      createQuestions();
    } else {
      exit(1);
    }
  } else {
    exit(1);
  }



}


int main () {

  showIntro();


}
