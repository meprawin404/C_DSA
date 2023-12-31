#include <stdio.h>
#include <string.h>

int count_vowels(char string[]) {
    /*
    Count the number of vowels in a given string.
    */
    char vowels[] = "aeiouAEIOU";
    int count = 0;
    int i, j;
    for (i = 0; i < strlen(string); i++) {
        for (j = 0; j < strlen(vowels); j++) {
            if (string[i] == vowels[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

int main() {
    char string[] = "prawin";
    printf("%d", count_vowels(string)); // Output: 3
    return 0;
}
