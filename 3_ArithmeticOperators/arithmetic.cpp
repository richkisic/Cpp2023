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
    

    return 0;
}