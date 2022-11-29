#include <cstddef>
#include <iostream>
using namespace std;

// Write the function numChr().The function has two parameters: a const char * s pointing to the first
// character in a C-style string, and a char c. Return the number of times that c appears inside s.

// You can call the function like this:

//      const char * s = "abracadabra";
//      numChar(s, 'a')->7
//      numChar(s, 'A')->0

int numChr(const char * s, char c)
{
    // counter for times found
    int result = 0;
    // counter for element in array
    int i = 0;
    // while i is not null (end)
    while (s[i] != '\0')
    {
        // count match algo
        char ch = s[i];
        if (ch == c)
        {
            result++;
        }
        i++;
    }
    return result;
}

int main ()
{
    const char * s = "abracadabra";
    cout << "  Actual: " << numChr(s, 'a') << endl;
    cout << "Expected: 5" << endl;
    cout << endl;
    
    cout << "  Actual: " << numChr(s, 'A') << endl;
    cout << "Expected: 0" << endl;
    cout << endl;
}
