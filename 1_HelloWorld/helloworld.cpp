/*
 A multi-line comment. We're using a preprocessor directive
 to include all the contents of the C++ Standard Library 
 header file related to input/output operations
*/
#include <stdio.h>

/**
 * @brief A documentation style comment. This function is your
 * entry point, and it is called behind the scenes by a routine
 * named "_start". If you want to write your own initialization
 * code, you could set flags in your toolchain and define _start!
 * 
 * @return int, a status code
 */
int main()
{
    // A single line comment, normally kept to about 80 characters or less
    printf("Hello World" /* this in-line comment won't be printed! */);

    return 0;
}