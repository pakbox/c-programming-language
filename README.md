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

- The while loop operates as follows: the condition in parentheses is tested. If it is true, the body of the loop is executed. Then the condition is re-tested, and if true, the body is excuted again. When the test becomes false, the loop ends, and execution continues at  the statement that follows the loop.

- **The indentation emphasizes the logical structure of the program. Although C compilers do not care how a program looks, proper indentation and spacing are critical in making programs easy for people to read. We recommend writing only one statement per line, and using blanks around operators to clarify grouping. We have chosen one of the several popular styles. Pick a style that suits you, then use it consistently.**

- Integer division truncates.

- printf is not part of C langugage; there is no input or output defined in C itself. printf is just a useful function from the standard library of functions that are normally accessible to C programs.

- A decimal point in a constant indicates that it is a floating point.

- If an arithmetic operator has integer operands, an integer operation is performed. If an arithmetic operator has one floating-point operand and one integer operand, however, the integer will be converted to floating point before the operation is done.

- Writing floating-point constants with explicit decimal points even when they have integral values emphasizes their floating-point nature for human readers.

- In any content where it is permissible to use the value of a variable of some type, you can use a more complicated expression of that type.

- The for statement is a loop, a generalization of while. Within the parentheses, there are three parts, seperated by semicolons. The first part, the initialization is done, before the loop proper is entered. The second part is the test or the condition that controls the loop. This condition is evaluated; if it is true, the body of the loop is entered. Then the increment step is executed, and the condition re-evaluated. The loop terminates if the condition has become false.

- The choice between while and for is arbitrary, based on which seems clearer. The for is usually appropriate for loops in which the initialization and increment are single statements and logically related, since it is more compact than while and it keeps the loop control statements together in one place.

- **It's bad practice to bury "magic numbers" in a program; they convey little information to someone who might have to read the program later, and they are hard to change in a systematic way. One way to deal with magic numbers is to give them meaningful names.**

- A #define line defines a *symbolic name* or *symbolic constant* to be a particular string of characters.

- Symbolic constant names are conventionally written in upper case so they can be readily distinguished from lower case variable names.

- By using the symbolic constants, we are assured that nothing in a program depends on the specific numeric value.

- The model of input and output supported by the the standard library is very simple. Text input or output, regardless of where it originates or where it goes to, is dealt with as streams of characters. A text stream is a sequence of characters divided into lines; each line consists of zero or more characters followed by a newline character.

- The operators ++ and -- can be either prefix operators (++nc) or postfix (nc++); these two forms have different values in expression.

- printf uses %f for both float and double; %.0f suppresses printing of the decimal point and the fraction part, which is zero.

- The body of for loop can be empty, if all of the work is done in test and increment parts. But the grammar rules of C require that a for statement have a body. The isolated semicolon, called a null statement is there to satisfy that requirement. It's put on a seperate line to make it visible.

- Programs should act intellingently when give zero-length input. The while and for statements help ensure that programs do reasonable things with boundary conditions.

- A character written between single quotes represents an integer value equal to the numerical value of the character in the machine's character set. This is called a character constant, although it is just another way to write a small integer. So, for example, 'A' is a character constant; in the ASCII character set its value is 65, the internal representation of character A. Of course 'A' is to be preferred over 65: its meaning is obvious, and it is independent of a particular character set. Note carefully that '\n' is a single character, and in expressions is just an integer; on the other hand, "\n" is a string constant that happens to contain only 1 character.
