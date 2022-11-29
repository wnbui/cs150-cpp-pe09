#include <cstddef>
#include <iostream>
using namespace std;

// Write the function numStr().The function has two parameters: a const char * s1 pointing to the first
// character in a C-style string, and a const char * s2. Return the number of times that s2 appears inside s1.

// You can call the function like this:

//      const char * s = "abracadabra";
//      numStr(s, "a")->5
//      numStr(s, "bara")->2
//      numStr(s, "cad")->1

int numStr(const char * s1, const char * s2)
{
    // counter for times found
    int result = 0;
    while (*s1)
    {
        auto * p1 = s1;
        auto * p2 = s2;
        while (*p1 && *p2 && *p1 == *p2)
        {
            p1++;
            p2++;
        }
        if (*p2 == '\0')
        {
            result++;
        }
        s1++;
    }
    return result;
}

int main ()
{
    const char * s = "abracadabra";
    cout << "  Actual: " << numStr(s, "a") << endl;
    cout << "Expected: 5" << endl;
    cout << endl;
    
    cout << "  Actual: " << numStr(s, "bra") << endl;
    cout << "Expected: 2" << endl;
    cout << endl;
    cout << "  Actual: " << numStr(s, "cad") << endl;
    cout << "Expected: 1" << endl;
    cout << endl;
}
