# mstrutils

Re-writing string.h for learning and fun.

## What is string.h

There is no string data structure in the C programming language. There are arrays of type char. And the string.h library is a library that allows you to do some operations on these char arrays.

## Why use this library?

- It does not depend standard C library
- Binary size is too small
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
- mmemmove

Function headers can be seen in the `mstrutils.h` file.

## Compiling and installing

```bash
make
make install
```

This command creates the `libmstr.so` file and copies it into ~/.local/lib/

If you can't compile or run your code with this library, check out the *Troubleshooting* section at the end of the README.

## How to use

To use functions, you can add the text `#include <mstrutils.h>` to the top of your code.
While compiling your code with this library, use `-lmstr` flag

## Troubleshooting

Sometimes your system can't see ~/.local/lib/ for libraries. If you can use root, you can type

```bash
make
sudo make install PREFIX=/usr/local
```

But if you can't do this, add this to your .bashrc:

```bash
export LD_LIBRARY_PATH=$HOME/.local/lib:$LD_LIBRARY_PATH
export LIBRARY_PATH=$HOME/.local/lib:$LIBRARY_PATH
export C_INCLUDE_PATH=$HOME/.local/include:$C_INCLUDE_PATH
```

And run this command:
```bash
source ~/.bashrc
```

Thanks for reading.
