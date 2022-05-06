# C Programming Language

Notes for book - C Programming Language - Brian W. Kernighan, Dennis M. Ritchie

Text marked in bold is appplicable to all languages.

# Chapter 1: A Tutorial Introduction

- **The only way to learn a new programming language is by writing programs in it. The first program to write is the same for all languages. Print the words "hello, world". This is the big hurdle; to leap over it you have to be able to create the program text somewhere, compile is successfully, load it, run it, and find out where your output went. With these mechanical details mastered, everything else is comparitively easy.**

- A C program, what-ever its size, consists of functions and variables.

- One method of communicating data between functions is for the calling function to provide a list of values, called arguments, to the function it calls. The parentheses after the function name surround the arugument list.

- A sequence of characters in double quotes, like "hello, world\n", is called a character string or string constant.

- printf never supplies a newline automatically.

- In C, all variables must be declared before they are used, usually at the beginning of the function, before any executable statements. A declaration announces the properties of variables; it consists of a type name and a list of variables.

- The while loop operates as follows: the condition in paranthesis is tested. If it is true, the body of the loop is executed. Then the condition is re-tested, and if true, the body is excuted again. When the test becomes false, the loop ends, and execution continues at  the statement that follows the loop.

- **The indentation emphasizes the logical structure of the program. Although C compilers do not care how a program looks, proper indentation and spacing are critical in making programs easy for people to read. We recommend writing only one statement per line, and using blanks around operators to clarify grouping. We have chosen one of the several popular styles. Pick a style that suits you, then use it consistently.**

- Integer division truncates.

- printf is not part of C langugage; there is no input or output defined in C itself. printf is just a useful function from the standard library of functions that are normally accessible to C programs.

- A decimal point in a constant indicates that it is a floating point.

- If an arithmetic operator has integer operands, an integer operation is performed. If an arithmetic operator has one floating-point operand and one integer operand, however, the integer will be converted to floating point before the operation is done.

- Writing floating-point constants with explicit decimal points even when they have integral values emphasizes their floating-point nature for human readers.
