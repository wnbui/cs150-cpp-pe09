#include <cstddef>
#include <iostream>
using namespace std;

// Write the function myStrChr(). The function has two parameters: a const char * s pointing to the first
// character in a C-style string, and a char c. Return a pointer to the first appearance of c appearing
// inside s and nullptr if c does not appear inside s.

// You can call the function like this:

//      const char * s = "Aardvark";
//      myStrChr(s, 'a')->&s[1]
//      myStrChr(s, 'V')->nullptr

const char * myStrChr(const char * s, char c)
{
    // if *s does not match c, keep increment
    while (*s && *s != c)
    {
        s++;
    }
    // will stop at null or where c is found
    return s;
}

int main ()
{
    const char * s = "Aardvark";
    cout << "  Actual: " << myStrChr(s, 'a') << endl;
    cout << "Expected: ardvark" << endl;
    cout << endl;
    
    cout << "  Actual: " << myStrChr(s, 'V') << endl;
    cout << "Expected: " << endl;
}
