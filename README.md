*This project has been created as part of the 42 curriculum by aait-abd.*

# Libft

## Description

Libft is the first project of the 42 Common Core curriculum. The goal is to create a personal C library by reimplementing selected standard C library functions and developing additional utility functions.

This project helps develop an understanding of C programming, including pointers, memory allocation, string manipulation, function pointers, and linked lists. The resulting library can be reused in future 42 projects.

The library is compiled into a static library named `libft.a`.

## Library Contents

The Libft project is divided into three parts.

### Part 1: Libc Functions

This part consists of reimplementing selected standard C library functions using the `ft_` prefix.

The functions cover:

- **Character checks and conversions:** checking character types and converting letter case.
- **String operations:** measuring string length, searching for characters and substrings, and comparing strings.
- **Memory operations:** setting, copying, moving, and searching memory.
- **Memory allocation:** allocating and duplicating memory.
- **File descriptor output:** writing characters, strings, and numbers to a specified file descriptor.

### Part 2: Additional Functions

This part introduces utility functions built using the functions implemented in Part 1.

The functions cover:

- Creating substrings and joining strings.
- Trimming characters from strings.
- Splitting strings using a delimiter.
- Converting integers to strings.
- Applying functions to string characters using callbacks.
- Writing strings and numbers to file descriptors.

### Part 3: Linked Lists

The bonus part focuses on singly linked lists.

Each node uses the `t_list` structure, which contains a `content` pointer and a `next` pointer referencing the next node.

The linked-list functions provide operations to:

- Create new nodes.
- Add nodes to the beginning or end of a list.
- Count the nodes in a list.
- Retrieve the last node.
- Delete individual nodes.
- Clear an entire list.
- Apply a function to every node's content.
- Create a new list by transforming the contents of an existing list.

These operations provide practical experience with dynamic memory allocation, pointers to pointers, function pointers, and memory management.

## Instructions

### Requirements

The project requires a C compiler, `make`, and compliance with the 42 Norm.

The source files must compile with the following flags:

```bash
-Wall -Wextra -Werror
```

### Compilation

Run the following command from the project directory to compile the library:

```bash
make
```

This generates the static library `libft.a`.

### Makefile Rules

| Command       | Description                                       |
| ------------- | ------------------------------------------------- |
| `make`        | Compiles the library.                             |
| `make all`    | Builds the library.                               |
| `make clean`  | Removes object files.                             |
| `make fclean` | Removes object files and `libft.a`.               |
| `make re`     | Removes generated files and rebuilds the library. |

### Usage

To use the library in another C program, include `libft.h` and link against `libft.a`.

Example:

```c
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char    *str;

    str = ft_strdup("Hello, 42!");
    if (str == NULL)
        return (1);
    printf("%s\n", str);
    free(str);
    return (0);
}
```

Compile the program from the project directory:

```bash
cc -Wall -Wextra -Werror main.c -o program
```

Run the executable:

```bash
./program
```

### Testing and Norminette

To check compliance with the 42 coding standard, run:

```bash
norminette
```

To rebuild the library from scratch, run:

```bash
make re
```

## Resources

- **42 Libft Subject:** The project PDF provided by 42.
- **C Standard Library Documentation:** [https://en.cppreference.com/w/c/header](https://en.cppreference.com/w/c/header)

### AI Usage

ChatGPT was used to explain C concepts, review function logic, identify potential errors, and help organize this README.

## Technical Requirements

The project follows the requirements of the 42 Libft subject:

- The library is written in C.
- Source files must comply with the 42 Norm.
- Compilation must use `-Wall -Wextra -Werror`.
- Global variables are not permitted.
- Helper functions should be declared `static` when appropriate.
- Dynamically allocated memory must be handled correctly.
- The library must be compiled using the required Makefile rules.

## Learning Objectives

The main learning objectives of this project are to:

- Develop a deeper understanding of C programming.
- Practice working with pointers and memory addresses.
- Understand dynamic memory allocation and deallocation.
- Implement string and memory manipulation functions.
- Use function pointers and callbacks.
- Create and manipulate singly linked lists.
- Improve debugging skills and handle edge cases.
- Write reusable code while following strict coding standards.

## Author

**Login:** aait-abd

## License

This project was created for educational purposes as part of the 42 curriculum.

