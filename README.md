<p align="center">
    <img src="libftm.png" alt="Badge Name">
</p>

## Project Overview

**Libft** is the first project at 42 school where students build their own C library, replicating standard C library functions along with additional utility functions. This project forms the foundation for future projects at 42, as students will use this library throughout their curriculum. This README outlines the goals, methodologies, challenges, and outcomes of the Libft project, with a special focus on bonus achievements.

### Goals

- **Replicate Standard C Functions:** To re-code a set of the standard C library functions, ensuring they have similar functionalities and behaviors as the originals.
- **Additional Utility Functions:** To create a set of functions that are not available in the standard library but are useful for C programming.
- **Coding Norm Compliance:** All functions must comply with the 42 school's coding norm, which includes rules for formatting, function composition, and more.
- **Static Library Creation:** To compile these functions into a `libft.a` static library for future use in 42 school projects.

### Methodologies

- **Function-by-Function Approach:** Each function was developed and tested independently before integration into the library.
- **Test-Driven Development:** Implemented tests for each function to ensure they match the behavior of their standard library counterparts.
- **Peer Code Review:** Regular peer reviews were conducted to maintain code quality and norm compliance.

### Challenges and Solutions

- **Understanding C Library Functions:** Extensive research and experimentation to understand the behavior of standard library functions.
- **Memory Management:** Ensured efficient and error-free memory allocation and deallocation in functions dealing with memory.
- **Extensive Testing:** Developed comprehensive test suites to cover edge cases and ensure reliability.

### Bonus Achievements

- **libft Advanced Functions:** Expanded the library with linked lists manipulation and memory functions.

### Project Outcomes

- **Robust Library:** Developed a reliable and efficient set of functions that are essential for future projects at 42.
- **Deep Understanding of C:** Gained an in-depth understanding of C programming, particularly in areas of memory management and data structures.
- **Preparedness for Future Projects:** Established a solid foundation for tackling more complex projects at 42.

### Usage

To use the Libft library in your project:

1. Clone this repository.
2. Compile the library using `make`.
3. Include `libft.h` in your C files.
4. Compile your project with `libft.a`.

``` bash
gcc your_c_file.c -L. -lft -o your_program
```

