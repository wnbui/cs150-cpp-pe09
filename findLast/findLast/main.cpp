#include <cstddef>
#include <iostream>
using namespace std;

// Write the function findLast(). The function has two parameters: a const char * s1 pointing to the first
// character in a C-style string, and a const char * s2. Return a pointer to the last appearance of s2
// appearing inside s1 and nullptr (0) if s2 does not appear inside s.

// You can call the function like this:

//      const char * s = "Aardvark";
//      findLast(s, "ar")->&s[5]
//      findLast(s, "K")->nullptr

const char * findLast(const char *s1, const char * s2)
{
    // temp pointer to current found position
    auto * found = s1;
    // count for matches found
    int match = 0;
    // while s1 is true (not null)
    while (*s1)
    {
        // temp pointer to s1
        auto * p1 = s1;
        // temp pointer to s1
        auto * p2 = s2;
        // while p1 (s1) and p2 (s2) are true and *p1 matches *p2
        while (*p1 && *p2 && *p1 == *p2)
        {
            // increment both
            p1++;
            p2++;
        }
        // if *s2 (p2) reaches end (null) a match was found; last match is last appearance of s2
        if (*p2 == '\0')
        {
            // update index found
            found = s1;
            // increment match count
            match++;
        }
        // not found, increment s1
        s1++;
    }
    // if no match is found, return nullptr (end of s1)
    if (match == 0)
    {
        found = s1;
    }
    return found;
}

int main ()
{
    const char * s = "cowtown";
    cout << "  Actual: " << findLast(s, "o") << endl;
    cout << "Expected: own" << endl;
    cout << endl;
    
    cout << "  Actual: " << findLast(s, "K") << endl;
    cout << "Expected: " << endl;
    cout << endl;
}
