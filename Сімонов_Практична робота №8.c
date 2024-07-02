#include <stdio.h>
#include <string.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

unsigned long long countAnagrams(char* word) {
    int length = strlen(word);
    unsigned long long totalAnagrams = factorial(length);

    int letterCount[26] = { 0 };
    for (int i = 0; i < length; ++i) {
        letterCount[word[i] - 'A']++;
    }
    for (int i = 0; i < 26; ++i) {
        if (letterCount[i] > 1) {
            totalAnagrams /= factorial(letterCount[i]);
        }
    }

    return totalAnagrams;
}

int main() {
    char word[15];
    printf("Enter a word: ");
    scanf_s("%s", word);

    unsigned long long anagramCount = countAnagrams(word);
    printf("Number of anagrams: %llu\n", anagramCount);

    return 0;
}
