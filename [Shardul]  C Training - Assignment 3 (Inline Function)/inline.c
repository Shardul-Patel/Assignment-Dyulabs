#include <stdio.h>
#include <time.h>

static inline int cnt_vowels(char *str) {
    int count = 0;
    while (*str) {
        switch (*str) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
        }
        str++;
    }
    return count;
}

int main() 
{
    char str[] = "This is a sample string with vowels";

    clock_t start = clock();
    printf("Number of vowels: %d\n", cnt_vowels(str)); // Call #1
    printf("Number of vowels: %d\n", cnt_vowels("Hello World")); // Call #2
    printf("Number of vowels: %d\n", cnt_vowels("AEIOUaeiou")); // Call #3
    printf("Number of vowels: %d\n", cnt_vowels("")); // Call #4
    printf("Number of vowels: %d\n", cnt_vowels("xyz")); // Call #5
    printf("Number of vowels: %d\n", cnt_vowels("programming")); // Call #6
    printf("Number of vowels: %d\n", cnt_vowels("consonants")); // Call #7
    printf("Number of vowels: %d\n", cnt_vowels("abcdefghijklmnopqrstuvwxyz")); // Call #8
    printf("Number of vowels: %d\n", cnt_vowels("1234567890")); // Call #9
    printf("Number of vowels: %d\n", cnt_vowels("!@#$%^&*()")); // Call #10
    clock_t stop = clock();
    double elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
    printf("Time elapsed in ms: %f", elapsed);

    return 0;
}
