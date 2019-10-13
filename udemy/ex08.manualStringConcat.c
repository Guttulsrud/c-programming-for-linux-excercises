//
// Created by Håkon Guttulsrud on 10/13/19.
//
// Concatenating two char-strings without using library function strcat()
//
#include <stdio.h>

void manualStringConcat(const char str1[],const char str2[], char result[]) {
    int i = 0;
    int j = 0;

    while(str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    while(str2[2] != '\0') {
        result[i+j] = str2[j];
        j++;
    }

    result[i+j] = '\0';
    printf("Concatenated string: %s.\n", result);
}

int main() {
    char s1[] = "foo";
    char s2[] = "Bar";
    char result[] = "";
    manualStringConcat(s1, s2, result);
}