// DocTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "doctest.h"



int main(int argc, char** argv)
{
    doctest::Context context;
    context.setOption("abort-after", 5);
    context.applyCommandLine(argc, argv);

    int res = context.run();
    if (context.shouldExit()) // important - query flags (and --exit) rely on the user doing this
        return res;

    int client_stuff_return_code = 0;
    // your program - if the testing framework is integrated in your production code

    return res + client_stuff_return_code; // the result from doctest is propagated here as well

    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
