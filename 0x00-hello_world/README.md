## Why C programming is awesome
C programming is awesome for several reasons:

1. Portability: C code can be easily ported to different platforms and operating systems without any modifications.
2. Efficiency: C is a low-level language that can be compiled into efficient machine code, making it ideal for system programming and other performance-critical applications.
3. Flexibility: C provides a lot of control over the hardware and memory, allowing programmers to create complex programs with precise control over how the code is executed.
4. Large community: C has a large community of developers who have written a vast amount of code libraries, making it easier to solve problems and write efficient programs.

## C History
C was invented by Dennis Ritchie at Bell Labs in the early 1970s. Ritchie was also one of the co-creators of the Unix operating system.

## Key figures in C programming
- Dennis Ritchie and Brian Kernighan are both computer scientists who worked together at Bell Labs. They co-authored the book "The C Programming Language," which is still considered a seminal work on C programming.
- Linus Torvalds is the creator of the Linux operating system, which was written in C.

## Compiling C code
- When you type `gcc main.c` in a terminal window, the GNU C Compiler (gcc) will compile the source code in the file "main.c" and create an executable file with the same name.
- The default program name when compiling with gcc is "a.out".
- To compile a C program using gcc, you can use the command `gcc source_file.c -o output_file`. This will create an executable file named "output_file" from the source code in "source_file.c".

## C Concepts
- The entry point is the point in the program where the execution begins. In a C program, the entry point is the main function.
- The main function is the starting point of a C program. It is where the program begins executing and typically contains the program's primary logic.
- The return value of the main function influences the return value of the program. A return value of 0 indicates that the program executed successfully, while a non-zero value indicates an error or abnormal termination. The specific values returned by the main function can be used to provide additional information about the nature of the error or termination.

## Printing Text
- To print text in C, you can use the `printf`, `puts`, and `putchar` functions. 
- The `printf` function is used to print formatted text, while the `puts` function is used to print a string of text with a newline character at the end. 
- The `putchar` function is used to print a single character.

## Unary Operator
- You can use the `sizeof` unary operator to get the size of a specific type. For example, `sizeof(int)` will return the size of an integer in bytes.

## Official C Coding Style
- The official C coding style is defined by the "[C Programming Language](http://cslabcms.nju.edu.cn/problem_solving/images/c/cc/The_C_Programming_Language_%282nd_Edition_Ritchie_Kernighan%29.pdf)" book, which was co-authored by Brian Kernighan and Dennis Ritchie.
- To check your code against this style, you can use the [`betty-style`](https://github.com/holbertonschool/Betty) tool.

## Including Header Files
- To find the right header to include in your source code when using a standard library function, you can consult the documentation for that function or library. 
- Typically, the required header file will be listed in the documentation.
