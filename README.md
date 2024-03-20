## ft_printf
This project provides an ideal opportunity to learn and practice creating formatted output in C. The ft_printf function creates a formatted string and prints it to standard output or to a file. In this project, you learn to work with variable arguments, analyze the format string and generate output in the appropriate format.

For more detailed information, look at the [**subject of this project**](en.subject.pdf).


## Usage

### Requirements

The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile, go to the library path and run:

```shell
$ make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "ft_printf.h"
```

## Example

```C
#include "ft_printf.h"
int main()
{
    ft_printf("My name is, %s\n", "Ali");
    return (0);
}
```
