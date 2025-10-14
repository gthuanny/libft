# Libft
`[subject.pdf](https://github.com/user-attachments/files/22882936/libft.en.subject.pdf)`

This project has been doing currently at 42 Porto. In october 2025.
# 📚 Libft – Your Very First C Library

> *Recreate the foundations of the C standard library and build your own toolbox for future 42 projects.*

![Language](https://img.shields.io/badge/language-C-blue.svg)
![Status](https://img.shields.io/badge/status-in_progress-blue.svg)
![School](https://img.shields.io/badge/42-Network-000000.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)

---

## 🧠 Overview

**Libft** is the very first project of the 42 curriculum.  
The goal is to **recreate the most essential functions from the C standard library (`libc`)**, and then expand it with additional and bonus functions.  

This project teaches you how to:
- Understand how standard C functions work internally.  
- Manage memory and pointers manually.  
- Write clean, modular, and norm-compliant code.  
- Build your own static library (`libft.a`) to use in future projects.  

---

## 🗂️ Project Structure

```bash
libft/
├── Makefile
├── libft.h
├── ft_*.c
├── ft_*.o
└── libft.a
make        # compile libft.a
make clean  # remove object files
make fclean # remove object files and libft.a
make re     # recompile everything
make bonus  # compile bonus functions
```
🧩 Part 1 – Libc Functions

Reimplementation of a selection of standard C library functions, all prefixed with ft_.
Character checks:
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint

String manipulation:
- ft_strlen
- ft_strlcpy
- ft_strlcat
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_strnstr
- ft_strdup

Memory handling:
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_calloc

Case conversion:
- ft_toupper
- ft_tolower

Conversion:
- ft_atoi

🧱 Part 2 – Additional Functions

Additional functions that are not part of the libc but are useful for string manipulation and I/O operations.

- ft_substr      - Extracts a substring from a string.
- ft_strjoin     - Concatenates two strings into a new one.
- ft_strtrim     - Removes specific characters from the start and end of a string.
- ft_split       - Splits a string into an array of strings using a delimiter.
- ft_itoa        - Converts an integer to a string.
- ft_strmapi     - Applies a function to each character of a string (returns a new string).
- ft_striteri    - Applies a function to each character (modifies in place).
- ft_putchar_fd  - Outputs a character to a given file descriptor.
- ft_putstr_fd   - Outputs a string to a given file descriptor.
- ft_putendl_fd  - Outputs a string followed by a newline.
- ft_putnbr_fd   - Outputs an integer to a given file descriptor.

🏅 Bonus Part – Linked List Functions

Once the mandatory part is perfect, you can implement the bonus functions to handle linked lists.
```bash
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```
- ft_lstnew       - Creates a new node.
- ft_lstadd_front - Adds a node to the beginning of the list.
- ft_lstsize      - Counts the number of nodes in the list.
- ft_lstlast      - Returns the last node of the list.
- ft_lstadd_back  - Adds a node to the end of the list.
- ft_lstdelone    - Deletes a node using a function to free its content.
- ft_lstclear     - Deletes and frees an entire list.
- ft_lstiter      - Applies a function to each node’s content.
- ft_lstmap       - Creates a new list by applying a function to each node’s content.

  | Section              | Functions           |
  | -------------------- | ------------------- |
  | Part 1 – Libc        | 23                  |
  | Part 2 – Additional  | 11                  |
  | Bonus – Linked Lists | 9                   |
  | **TOTAL**            | 🎯 **43 functions** |

🧪 Testing

Even though tests are not graded, they are essential for debugging and validating your work.
You can use the following public testers to check your implementation:

# Clone and run a tester

cd libft-unit-test
make
./run_test

💬 **Peer Evaluation**

**During the defense, you will be asked to:**

- Explain how your functions work internally.
- Justify your use of memory allocation and pointer manipulation.
- Modify or extend a function live if requested.

**Important:**
The bonus part will only be evaluated if the mandatory part is flawless.
Memory leaks, segmentation faults, or norm errors will result in a 0.

**Tips for success:**
- Understand the difference between memcpy and memmove.
- Be able to explain how malloc and free work.
- Always handle null pointers and boundary cases.



**🌱 Additional Notes**

Libft is just the beginning.
You’ll use this library in many future 42 projects — including get_next_line, ft_printf, pipex, and minishell.
  
**✨ Author**

👩‍💻 Gabrielle @gthuanny
📍 42 Porto
📧 gabithuanny1@gmail.com
