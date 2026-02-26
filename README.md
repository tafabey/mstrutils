# mstrutils

Re-writing string.h for learning and fun.

## Why use this library?

- It does not depend standart C library
- It's binary size is too small
- It has easy-readable and short code
- It distributed with [BSD-3-Clause](LICENSE) license

## Currently available functions:
- mstrlen
- mstrcmp
- mstrcpy
- mstrchr
- mstrstr
- mstrncmp
- mstrncpy
- mstrcat
- mstrncat
- mmemcpy
- mmemcmp

Function headers can be seen in the `mstrutils.h` file.

## Compiling and creating object file

```bash

gcc -c mstrutils.c

```
This command creates the `mstrutils.o` file

## How to use

To use functions, you can add the text `#include "mstrutils.h"` to the top of your code.
