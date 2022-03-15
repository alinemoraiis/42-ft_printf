# 42-ft_printf
- This project is about coding my own printf(). The ft_printf() is a mimic of the original printf(), but handle only the following conversions: *cspdiuxX%*.

## :alien: Files
- **Makefile**: defines set of tasks (compile all functions) to be executed.
- **ft_printf.h**: header file with all declarated functions.

## :alien: Functions
- **ft_printf**: main function. The function ft_format is used to check the format of the next argument.
- **ft_print_char**: function to print char type arguments. Return 1 (the size of a char).
- **ft_print_str**: function to print string type arguments. Return the size of the string.
- **ft_print_ptr**: function to print pointer type arguments. Return the lenght of the pointer.
- **ft_print_nbr**: function to print integer type arguments. Return the lenght of the integer.
- **ft_print_uns**: function to print unsigned integer type arguments. Return the lenght of the integer.
- **ft_print_hex**: function to print hexadecimal type arguments. Return the lenght of the hexadecimal.
- **ft_putnbr_fd**: function copied from Libft. Used to print numbers.

## :alien: Used tests
- [printfTester](https://github.com/Tripouille/printfTester)
