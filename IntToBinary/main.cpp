// This program will take an integer input and output its binary form.

#include <iostream>
#include <string>

std::string result; // Storing binary characters being added into one string
std::string remainderString; // Variable to hold string version of remainder variable (int)
int selection; // Variable to hold int version of selection variable (string)
int remainder; // Variable to hold modulus output (remainder/binary value of math operation)

int main()
{
    std::cout << "Please enter a number." << std::endl << std::endl;
    std::cin >> selection;
    while (selection != 1)
    /* Checks for two things:
    1) If it is 1, then the binary form is just 1, so don't do anything to it.
    2) If we have divided it enough to equal 1, we are done with our loop. */
    {
        remainder = selection % 2; // Getting the remainder (1 or 0), which directly translates to a binary symbol.
        remainderString = std::to_string(remainder); // Converting the above variable to a string for printing compatibility.
        result.insert(0, remainderString); // Adding that string to the beginning of our result string.
        selection /= 2; // After we're done with getting the binary value, we half it to move to the next operation.
    }
    /* Integers cannot go into decimals, so we cannot check for != 0.5
    at the while function, so we do the whole thing one more time here. */
    remainder = selection % 2;
    remainderString = std::to_string(remainder);
    result.insert(0, remainderString);
    std::cout << result << std::endl; // Printing final result.
}