//
// Created by Håkon Guttulsrud
//

#include <stdlib.h>
#include <stdio.h>

// Counts words in file given as command line argument
int countWordsInFile(char str[]) {
    int words = 0;
    char buffer[200];

    FILE *file = NULL;
    if((file = fopen(str, "r")) != NULL) {
        while(fscanf(file, "%s", buffer) != EOF){
            words++;
        }

        fclose(file);
        return words;
    } else {
        printf("Error opening file!");
        exit(1);
    }
}

int main(int argc, char *argv[]) {
    printf("Number of words in %s : %d. ", argv[1], countWordsInFile(argv[1]));
}