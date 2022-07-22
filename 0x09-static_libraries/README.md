# Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
What is a static library, how does it work, how to create one, and how to use it
Basic usage of ar, ranlib, nm

### Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.

*Short Read of Static Libs*

Libraries are collections of objects that are mad eavailable for use by other programs
they are two types. Static and Share Libs.

**Static Libs**
Used with extension .a
Changes to static libs require recompilation of linked binaries
Libs do not reside on target platform

use ar command to create static libs

ar cr libtest.a source.o source2.o
*libs mostly start with a lib*
Create a .h include file to define prototypes for lib functions e.g main.h

Link a static lib with
gcc source.c -ltest -o outputFile
-I <include non standard include dirs
-L include dirs


#Practical example in dir 0x09 above under dir example

