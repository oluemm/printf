# PRINTF Collaborative Project



### Prototype
`int _printf(const char *format, ...)`

- Returns: the number of characters printed (excluding the null byte used to end output to strings).
- Write output to stdout, the standard output stream.
- `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail.

### File Usage
File Name | Description

The _printf program will replicate the effects of the listed % format specifiers as when used with printf.

Function name | Description | Format Specifier
--- | --- | ---
`_print_char` | Prints a single character | `%c`
`_print_string` | Prints a string of characters | `%s`
`_print_percent` | Prints a % | `%%`
`_print_int` | Prints an integer in base 10| `%d` & `%i`
`_print_reverse` | Prints the string in reverse | `r`
`_print_rot13` | Converts the string

### Compilation

This code can be compiled using
```
$ gcc -Wall -Werror -Wextra -pedantic *.c
```
OR (if you want to test for unknown format specifiers)

```
$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
```

## Collaborative Authors

### 17 [Emmanuel Fasogba](https://github.com/fashemma007) & 13 [Owoyomi Taiwo](https://github.com/owoyomi20)