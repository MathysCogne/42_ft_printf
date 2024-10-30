<div align="center">
<h1>42 - FT_PRINTF</h1>
<p><strong>Because putnbr and putstr aren’t enough</strong></a></p>
<p><a href="https://github.com/MathysCogne/42_ft_printf/blob/main/subject/printf_en.pdf"><strong>Subject</strong></a></p>
</br>
</div>

## Features

- This project is a custom implementation of the `printf` function in C
- Handles specifiers: `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`, and `%%`.

</br>

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


</br>

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



</br>

## Compilation `libftprintf.a`

To compile the library, simply run the `make` command:

```bash
make
```
``make bonus``
``make clean``
``make fclean``
``make re``

</br>

## Disclaimer
> At 42 School, most projects must comply with the [Norm](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf).