#include <cstddef>
#include <iostream>
using namespace std;

// Write the function myStrrChr(). The function has two parameters: a const char * s pointing to the
// first character in a C-style string, and a char, c. Return a pointer to the last appearance of c
// appearing inside s and nullptr (0) if c does not appear inside s.

// You can call the function like this:

//      const char * s = "Aardvark";
//      findLast(s, 'a')->&s[5]
//      findLast(s, 'V')->nullptr

const char * myStrrChr(const char * s, char c)
{
    // temp pointer to current found position
    auto * found = s;
    // count for matches found
    int count = 0;
    // while s is true (not null)
    while(*s)
    {
        // if *s is equal to c
        if (*s == c)
        {
            // update pointer to position found
            found = s;
            // increment match count
            count++;
        }
        // does match so increment s
        s++;
    }
    // if no matches found, set found pointer to null (end of s after while loop)
    if (count == 0)
    {
        found = s;
    }
    return found;
}

int main ()
{
    const char * s = "Aardvark";
    cout << "  Actual: " << myStrrChr(s, 'a') << endl;
    cout << "Expected: ark" << endl;
    cout << endl;
    
    cout << "  Actual: " << myStrrChr(s, 'V') << endl;
    cout << "Expected: " << endl;
    cout << endl;
}
