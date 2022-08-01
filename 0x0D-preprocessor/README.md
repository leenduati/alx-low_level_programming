# Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
What are macros and how to use them
What are the most common predefined macros
How to include guard your header files

### Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.


The CPP (C Pre Processor) is not part of the compiler, but executed before the source code is compiled
PreProcessor removes comments, includes header files, and define macros.

*#define and #ifdef are common types of macros*
All CPP directives start with hash key

1. #define
It substitutes a preprocessor macro. e.g. when defining a var
**#include <stdio.h>**
**#define PI 3.14**
**define SQR(X) X*X**
**int main()**
**{**
**int r = 3;**
**printf("area is %f", PI * r * r);**
**}** 

2. #undef
undefine a defined variable e.g
**#define Q 30**
**undefine Q**

3. #ifdef
Returns true if MACRO is defined
this is a conditional compilation
**define S**
**int main(){**
**#ifdef S**
**printf("hello world)**
**#else**
**printf("Goodbye world")**
**#endif}**

4. #if
**#define V 1**
**#if V >= 2**
**Printf("hello")**
**endif**
every if should end with endif

# Predefined MACROS
__DATE__ current datein MMMM DD YYYY
__TIME__ current time in HH:MM:SS
__FILE__ current filename as a string literal
__LINE__ current line number as a decimal constant
__STDC__ defined as 1 when compiler compiles with ANSI standard

5. #error
error prints error message on stderr and halts compilation
if var not defined in code, output #error "please input var"

# Object like MACROS
An object-like macro is a simple identifier which will be replaced by a code fragment.
There is no restriction on what can go in a macro body provided it decomposes into valid preprocessing tokens. Parentheses need not balance, and the body need not resemble valid C code. (If it does not, you may get error messages from the C compiler when you use the macro.)
When the preprocessor expands a macro name, the macro's expansion replaces the macro invocation, then the expansion is examined for more macros to expand. For example,

     #define TABLESIZE BUFSIZE
     #define BUFSIZE 1024
     TABLESIZE
          ==> BUFSIZE
          ==> 1024
TABLESIZE is expanded first to produce BUFSIZE, then that macro is expanded to produce the final result, 1024.

Notice that BUFSIZE was not defined when TABLESIZE was defined. The ‘#define’ for TABLESIZE uses exactly the expansion you specify—in this case, BUFSIZE—and does not check to see whether it too contains macro names. Only when you use TABLESIZE is the result of its expansion scanned for more macro names.

This makes a difference if you change the definition of BUFSIZE at some point in the source file. TABLESIZE, defined as shown, will always expand using the definition of BUFSIZE that is currently in effect:

     #define BUFSIZE 1020
     #define TABLESIZE BUFSIZE
     #undef BUFSIZE
     #define BUFSIZE 37
Now TABLESIZE expands (in two stages) to 37.

# MACRO ARGUMENTS
To define a macro that uses arguments, you insert parameters between the pair of parentheses in the macro definition that make the macro function-like. The parameters must be valid C identifiers, separated by commas and optionally whitespace.

There are essentially three uses of the preprocessor--directives, constants, and macros. 
Directives are commands that tell the preprocessor to skip part of a file, include another file, or define a constant or macro. Directives always begin with a sharp sign (#) and for readability should be placed flush to the left of the page. 
All other uses of the preprocessor involve processing #define'd constants or macros. 
Typically, constants and macros are written in ALL CAPS to indicate they are special (as we will see).
If we write
1
#define [identifier name] [value]
whenever [identifier name] shows up in the file, it will be replaced by [value].

If you are defining a constant in terms of a mathematical expression, it is wise to surround the entire value in parentheses:
1
#define PI_PLUS_ONE (3.14 + 1)
