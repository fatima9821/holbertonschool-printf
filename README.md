# C - printf

## Description
Create an simple exact replica of the printf function found in the C programming language. Using Variadic functions, structs, and multiple helper functions, the program we created will be able display inputed characters, strings, integers, and decimals (base 10). Whatever format specifier you use with our `_prinf` function, should display the same results when used by the actual printf function. This project is to show an alternative method of creating your very own simple printf function in the C programming language.

If successfully compiled and executed, the function should return the number of characters printed (excluding the null byte used to end output to strings). And if it fails, then the function should return a `(-1)` upon error and `"(null)"` if the string argument takes in NULL. If the format specifier is unkown, then the output would print out the format specifier as a string.

The code was made to handle all the format specifiers, but because of the simplicity of our code, we only used 5 so far. In the future, we will update the printf repository to handle more format specifiers.

### Prototype
`int _printf(const char *format, ...)`

- Returns: the number of characters printed (excluding the null byte used to end output to strings).
- Write output to stdout, the standard output stream.
- `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail.
### File Usage
File Name | Description
--- | ---
[_printf.c](https://github.com/fatima9821/holbertonschool-printf/blob/main/_printf.c)| The main _prinf.c file is used to handle the array containing all the format specifiers used. As well as where the function starts to execute.
[main.h](https://github.com/fatima9821/holbertonschool-printf/blob/main/main.h) | The header file we used to contain all our the prototypes used as well as containing our struct and the standard libraries used.

The _printf program will replicate the effects of the listed % format specifiers as when used with printf.

Function name | Description | Format Specifier
--- | --- | ---
`_print_char` | Prints a single character | `%c`
`_print_string` | Prints a string of characters | `%s`
`_print_percent` | Prints a % | `%%`
`_print_int` | Prints an integer in base 10| `%d` & `%i`
`_print_reverse` | Prints the string in reverse | `r`
`_print_rot13` | Converts the string into Rot13 | `R`
`_print_binary` | Prints the binary form of the integer | `b`
`_print_unsigned` | Prints an unsigned integer | `u`
`_print_octal` | Prints and octal number | `o`
`_print_hex_l` | Prints the lower case hexidecimal number | `x`
`_print_hex_u` | Prints the upper case hexidecimal number | `X`
### Compilation

Our code can be compiled in either example
```
$ gcc -Wall -Werror -Wextra -pedantic *.c
```
or (if you want to test for unknown format specifiers)

```
$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
```

