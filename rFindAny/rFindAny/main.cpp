#include <cstddef>
#include <iostream>
using namespace std;

// Write the function rFindAny().The function has two parameters: a const char * s pointing to the
// first character in a C-style string, and a const char * letters. Return the index of the last
// character in s that matches any letter inside letters. Return -1 if no letters match.

// You can call the function like this:

//      const char * s = "This is a test.";
//      rFindAny(s, "aeiou")->11        // last vowel
//      rFindAny(s, " \t\n\r")->9       // last whitespace
//      rFindAny(s, "Bob")->-1          // none found

int rFindAny(const char * s, const char * letters)
{
    // counter for result; -1 if nothing is found
    int result = -1;
    // current position
    int pos = 0;
    // while *s is true (not null)
    while (*s)
    {
        // temp pointer s
        auto * p1 = s;
        // temp pointer letters
        auto * p2 = letters;
        // while iterating through p1 and p2 and *p1 and *p2 does not match
        while (*p1 && *p2 && *p1 != *p2)
        {
            // iterate until a match is found
            p2++;
        }
        // if p2 reaches null, a match was found
        if (*p2 != '\0')
        {
            // update current index; last updated index is last match found
            result = pos;
        }
        // no match was found, increment pointer
        s++;
        // increment position to match
        pos++;
    }
    return result;
}

int main ()
{
    const char * s = "This is a test.";
    cout << "  Actual: " << rFindAny(s, "aeiou") << endl;
    cout << "Expected: 11" << endl;
    cout << endl;

    cout << "  Actual: " << rFindAny(s, " \t\n\r") << endl;
    cout << "Expected: 9" << endl;
    cout << endl;

    cout << "  Actual: " << rFindAny(s, "Bob") << endl;
    cout << "Expected: -1" << endl;
    cout << endl;
}
