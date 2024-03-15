# Count Vowels Program

This C program counts the number of vowels in a given string using an inline function. It provides a simple demonstration of using an inline function to efficiently count vowels in a string.

## How to Compile and Run

1. Open your terminal.
3. Navigate to the directory containing the `count_vowels.c` file.
4. Compile the program using the `gcc` compiler:
   
    > gcc -o count_vowels count_vowels.c

## Functionality

The program defines an inline function `cnt_vowels` that takes a string as input and returns the count of vowels in that string. It then demonstrates the usage of this function by calling it at multiple locations within the `main` function with different input strings.

## Output

The program prints the number of vowels found in each input string.

## Comparison

After running the program, you can perform the following comparisons:

- **Binary Size**:
Use the `size` command to check the size of the binary file.

    > size count_vowels

## Comparison Table

| Metric          | With Inline       | Without Inline    |
|-----------------|-------------------|-------------------|
| Binary Size     | 41224 | 41224 |
| System Time     | 12 ms | 14 ms |
