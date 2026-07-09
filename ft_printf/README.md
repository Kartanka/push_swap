*This project has been created as part of the 42 curriculum by olkonuro*

# ft_printf

## Description

This project is about recoding the `printf()` function from the C standard library. The goal is to understand how variadic functions work in C and to create a custom implementation that handles a specific set of format specifiers. The project involves parsing a format string, handling various data types, and producing the formatted output.

## Instructions

### Compilation

To compile the library, run the following command in your terminal:

```bash
make
```

This will create a static library file named `libftprintf.a`.

### Usage

To use the `ft_printf` function in your own C projects, you need to include the header file `ft_printf.h` and link the compiled library during compilation.

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    return (0);
}
```

To compile this example, you would use a command like this:

```bash
cc main.c -L. -lftprintf -o my_program
```

## Algorithm

The `ft_printf` function works by parsing a format string that contains conversion specifications. These specifications begin with a `%` character and end with a conversion specifier. The function iterates through the format string, and when it encounters a `%`, it looks at the following characters to determine the type of conversion to be performed.

The function uses a `va_list` to access the variable arguments that are passed to it. When a conversion specifier is found, the corresponding argument is retrieved from the `va_list` using `va_arg`. The argument is then formatted according to the specifier and printed to the standard output.

This implementation uses a series of helper functions to handle the different conversion specifiers (`c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, and `%%`). Each helper function is responsible for retrieving the correct argument from the `va_list`, converting it to a string if necessary, and then printing it.

## Resources

*   **printf(3) - Linux man page**: [https://linux.die.net/man/3/printf](https://linux.die.net/man/3/printf)
*   **Variadic Functions in C**: [https://www.geeksforgeeks.org/variadic-functions-in-c/](https://www.geeksforgeeks.org/variadic-functions-in-c/)
