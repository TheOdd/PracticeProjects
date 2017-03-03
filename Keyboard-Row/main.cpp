#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<std::string> findWords(std::vector<std::string>& words)
{
    // TODO: Research more on unordered_set, vector, usage of <>, & char arrays.
    
    std::unordered_set<char> row1 {'q', 'w', 'e', 'r', 't', 'y','u', 'i', 'o', 'p'};
    std::unordered_set<char> row2 {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'}; 
    std::unordered_set<char> row3 { 'z', 'x', 'c', 'v', 'b' ,'n', 'm'};
    std::vector<std::unordered_set<char>> rows {row1, row2, row3};
    
    // TODO: Remove this return statement as soon as able to, as it only makes the compiler not give a warning
    std::vector<std::basic_string<char>> placeholder;
    return placeholder;
}

int main()
{
    
}