#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<string> findWords(vector<string>& words) 
{
    // TODO: Research more on unordered_set, vector, usage of <>, & char arrays.
    
    unordered_set<char> row1 {'q', 'w', 'e', 'r', 't', 'y','u', 'i', 'o', 'p'};
    unordered_set<char> row2 {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'}; 
    unordered_set<char> row3 { 'z', 'x', 'c', 'v', 'b' ,'n', 'm'};
    vector<unordered_set<char>> rows {row1, row2, row3};
    
    // TODO: Remove this return statement as soon as able to, as it only makes the compiler not give a warning
    vector<basic_string<char>> placeholder;
    return placeholder;
}

int main()
{
    
}