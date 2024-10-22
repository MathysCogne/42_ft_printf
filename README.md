# 42 ft_printf 

### Because putnbr and putstr aren’t enough


&nbsp;

## Features

- This project is a custom implementation of the `printf` function in C
- Handles specifiers: `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`, and `%%`.

| Specifier | Description        | Base        |
:-----------|:-------------------|:-------------
| **`%c`**  | Single character   | --          |
| **`%s`**  | String             | --          |
| **`%d`**  | Decimal number     | Decimal     |
| **`%i`**  | Integer            | Decimal     |
| **`%u`**  | Unsigned Integer   | Decimal     |
| **`%x`**  | Lowercase number   | Hexadecimal |
| **`%X`**  | Uppercase number   | Hexadecimal |
| **`%p`**  | Pointer - Memory addr | Hexadecimal |
| **`%%`**  | Percent sign       | --          |


&nbsp;

## Project Structure

- **includes/**
  - [`ft_printf.h`](./includes/ft_printf.h) - Header file

- **srcs/**
  - [`ft_printf.c`](./srcs/ft_printf.c) - ft_printf
  - [`ft_putlstr.c`](./srcs/ft_putlstr.c) - Prints strings
  - [`ft_putlnbr.c`](./srcs/ft_putlnbr.c) - Prints integers
  - [`ft_putlunbr_base.c`](./srcs/ft_putlunbr_base.c) - Prints unsigned numbers in different bases
  - [`ft_putladdr_base.c`](./srcs/ft_putladdr_base.c) - Prints memory addresses
  - [`ft_utils.c`](./srcs/ft_utils.c) - Utility functions
  - [`test.c`](./srcs/test.c) - Test file / Main

- **Makefile**
  - [`Makefile`](./Makefile): Compilation rules

- **subject/**
  - [`printf_en.pdf`](./subject/printf_en.pdf) - Subject En
  - [`printf_fr.pdf`](./subject/printf_fr.pdf) - Subject Fr



&nbsp;

## Compilation `libftprintf.a`

To compile the library, simply run the `make` command:

```bash
make
```
``make bonus``
``make clean``
``make fclean``
``make re``



