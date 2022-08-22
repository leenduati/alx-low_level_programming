# Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
Look for the right source of information online
How to create, open, close, read and write files
What are file descriptors
What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
How to use the I/O system calls open, close, read and write
What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
What are file permissions, and how to set them when creating a file with the open system call
What is a system call
What is the difference between a function and a system call

### Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.


*Open Function*
`#include <sys/types.h>`
`#include <sys/stat.h`
`#include <fcntl.h>`
`#include <unistd.h>`

System Calls - Provide an interface to the services made available by an OS

Types of modes execuable in an OS;
1. User Mode: Doesn't have access to hardware/memory
2. Kernel Mode: Can se his mode

Context Switching: switching from one mode to another.
A system call; call made by programs to access the resources/go into keenel mode.IT is a pragrmatic way in which a comp program requests a service form the kernel of the OS.

Example of a System Call
-Writing a simple program o read data from one file and copy them to another file. Steps/system calls taken
1. Acquire INput Filename && Acquire Output FIlename
2. Write prompt to screen
3. Accept Input
4. If file doesn't exist, abort

#### Steps for Processing a FIle
1. Declare a file pointer var
2. OPen a file using fopen()
3. Process the file using the suitable function
4. Close the fileusing fclose
