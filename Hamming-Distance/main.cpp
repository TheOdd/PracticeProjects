// This program will take two numbers as an input and output the hamming distance between them.

#include <iostream>

int hammingDistance(int x, int y) // Start hammingDistance function that takes two integers.
{
    int dist = 0; // Declaring variable for end result hamming distance.
        
    unsigned val = x ^ y; // Grabbing comparative binary value
        
    while (val != 0) // Interating through each symbol of grabbed value and checking if they are identical
    {
        dist++; // If it is not identical, then add one to the total hamming distance returned.
        val &= val -1; // Subtract one to move on to the next symbol in the binary comparison.
    }
        
    return dist; // Return hamming distance.
}

int main()
{
    int numberInput[1]; // Create integer array storing 2 variables.
    std::cin >> numberInput[0] >> numberInput[1]; // Get two values from one input seperated by space.
    std::cout << hammingDistance(numberInput[0], numberInput[1]) << std::endl; // Output hamming distance using the two inputted values.
}