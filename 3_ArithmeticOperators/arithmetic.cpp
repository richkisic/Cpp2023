// Notice we're now using the C++ standard input and output stream library
#include <iostream>

/**
 * @brief The entry point of this program
 * 
 * @return int, a status code
 */
int main()
{
    /* We're going to use the '<<' stream insertion operator on the output stream
       object named 'cout' that is part of the standard ('std') namespace to print
       to the default output stream. In this case, our console or terminal window.
       We will also put the standard end line character to the stream so we get a 
       new line of text following each line (like a typerwriter would work!).
       */
    std::cout << "Arithmetic Operators" << std::endl;
    
    std::cout << "The value of X = (2+3) + 1 * 4 is " << (2+3) + 1 * 4 << std::endl;

    // *** Unary operators, in order of precedence ***
    // Unary +, can promote a short to an integer if sizeof(short) < sizeof(int) on platform
    short littleVariable = 123;
    std::cout << "littleVariable is " << sizeof(littleVariable) << " bytes" << std::endl;
    std::cout << "+littleVariable is " << sizeof(+littleVariable) << " bytes" << std::endl;

    return 0;
}