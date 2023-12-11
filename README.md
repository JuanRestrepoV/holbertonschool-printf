# _printf function
This customized _printf function enables printing specific format specifiers: %d (digit of any sign), %% (percent sign), %c (character), and %s (string).
## Requirements
-Allowed editors: vi, vim, emacs.

-All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.

-All your files should end with a new line.

-A README.md file, at the root of the folder of the project is mandatory.

-Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.

-You are not allowed to use global variables.

-No more than 5 functions per file.

-In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation; do not push your own main.c file. Our main.c files might be different from the one shown in the examples.

-The prototypes of all your functions should be included in your header file called main.h

-Don’t forget to push your header file.

-All your header files should be include guarded.

-Note that we will not provide the _putchar function for this project.

## Compilation
Your code will be compiled using the following command:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## How it works

### _printf

-Accepts a format string and variadic arguments.

-Iterates through the format string to identify format specifiers.

-Calls format_specifier to handle each specifier and prints accordingly.

-Handles edge cases for NULL format string or single '%' without subsequent specifier.

### format_specifier
-Takes a format character and corresponding variadic arguments.

-Routes to specific printing functions based on the format character.

-Invokes:
#### print_char for %c
#### print_string for %s
#### print_digit for %d or %i
#### print_percent for %%
Handles unknown specifiers by printing the character directly.

### print_char
Retrieves a character from the variadic arguments and prints it.

### print_string
Retrieves a string from the variadic arguments.

Handles NULL strings and prints "(null)" if encountered.

Counts the string length and prints the string.

### print_percent
Prints a percent sign ("%").

### print_digit
Retrieves an integer from the variadic arguments.

Handles negative numbers, prints the '-' sign if necessary.

Uses itoa to convert and print the integer as characters.

### itoa
Converts a positive integer to characters recursively.

Prints the digits as characters.

This set of functions collaborates to handle different format specifiers, printing characters, strings, digits, and percent signs while managing edge cases and invalid specifiers gracefully.
