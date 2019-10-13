//
// Created by superkek on 10/13/19.
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

    FILE *file = NULL;
    if((file = fopen(argv[1], "r")) != NULL) {
        printf("The contents of \'%s\' are:\n", argv[1]);
        char buffer[200];

        int words = 0;
        while(fscanf(file, "%s", buffer) != EOF){
            words++;

        }
        fclose(file);
    }

    return words;
}