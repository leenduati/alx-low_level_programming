# Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

# General
What are structures, when, why and how to use them
How to use typedef

# Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.

A Atructure is a user def data type that can be used to group elements of diff types into a single type.

#Start of  NB
Besides functions you can also write documentation for structs, unions, enums and typedefs.
Instead of the function name you must write the name of the declaration;
the struct/union/enum/typedef must always precede the name. Nesting of declarations is not supported.
Use the argument mechanism to document members or constants.

Example:

/**
 * struct my_struct - Short description
 * @a: First member
 * @b: Second member
 * @c: Third member
 *
 * Description: Longer description
 */
struct my_struct
{
	int a;
	int b;
	int c;
};
For really longs structs, you can also describe arguments inside the body of the struct.

Example:

/**
 * struct my_struct - Short description
 * @a: First member
 * @b: Second member
 *
 * Description: Longer description
 */
struct my_struct
{
	int a;
	int b;
	/**
	 * @c: This is longer description of C
	 *
	 * Description: You can use paragraphs to describe arguments
	 * using this method.
	 */
	int c;
};
This should be use only for struct/enum members.

Example for a typedef:

/**
 * u_int - Typedef for unsigned int
 */
typedef unsigned int u_int;
# End of NB

# typedef

syntax: typedef existing_data_type new_data_type

typedef gives freedom to the user by allowing them to create their own types

For example:

*#include <stdio.h>*
*typedef int INTEGER;*

*int main(){*
*INTEGER var=100;*
*printf("%d", var);*
*return 0;*

In structures, we write 
typedef struct car {
	char engine[50];
	char fuel_type[10];
	int fuel_tank_cap;
	int seatig_Cap;
	float city_mileage;
}car;

/** New data typeof structure is now car **/

int main () {
	car c1;
}
