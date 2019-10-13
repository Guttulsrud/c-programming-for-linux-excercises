#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  //FILE pointers
  FILE *input;
  FILE *output;

  //Validating input file
  if((input = fopen(argv[1], "r")) != NULL) {
    char buffer[100];

    //Scanning input file to buffer, outputting to terminal
    fscanf(input, "%[^\n\n]", buffer);

    //Closing input file
    fclose(input);

    int i = 0;
    while(buffer[i]) {
      if(buffer[i] == ' ') {
        buffer[i] = ',';
      }
      i++;
    }

    //Creating and validating output file
    if((output = fopen(argv[2], "w")) != NULL) {

      //Printing buffer to output file
      fprintf(output, "\n%s\n", buffer);

      //Closing output file
      fclose(output);
    } else {
      printf("\nError writing to file!\n");
      exit(1);
    }
  } else {
    printf("\nError opening file!\n");
    exit(1);
  }
}
