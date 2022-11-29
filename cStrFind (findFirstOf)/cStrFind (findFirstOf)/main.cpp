#include <cstddef>
#include <iostream>
using namespace std;

// Write the following function without using the C++ string class or any functions in the standard library, including strlen(). You may use pointers, pointer arithmetic or array notation.

// Write the function findFirstOf(). Same as function cStrFind (#13 in Sample Problems)

//  The function has two parameters (str1, str2), both pointers to the first character in a C-style string.
//  You should be able to use literals for each argument.
//  The function searches through str1, trying to find a match for the first occurance of the C-string pointed to by str2. Return the index inside str1 where str2 occurs.
//  Note that if str2 does not appear in str1, then return -1.

// You can call the function like this:

//      cout << findFirstOf("eieioh", "eio"); // prints 2 (the index of the second e)
//      cout << findFirstOf("aaaiii", "aia"); // prints -1 (aia not inside aaaiii)

// Write the function cStrFind(). The function has two parameters: a const char * str, and a const char *
// subs. Find the first location where subs is found in str (as an int). Return -1 if subs is not located
// in str. You may use pointer or array notation, but you cannot use any functions or classes from the
// standard library.

int findFirstOf(const char * s1, const char * s2)
{
    
    int result = 0; // counter for index
    // if s1 or s2 are empty, return -1
    if (*s1 == '\0' || *s2 == '\0')
    {
        return -1;
    }
    // temp pointer set to string to be searched
    auto * beg = s1;
    // while temp pointer is true (not null)
    while (*beg)
    {
        // temp pointer set to beg
        auto * p1 = beg;
        // temp pointer set to substr to look for
        auto * p2 = s2;
        // while both pointers are true (not null) and matching
        while (*p1 && *p2 && *p1 == *p2)
        {
            // increment both
            p1++;
            p2++;
        }
        // if pointer of s2 reaches the end, s2 was found
        if (*p2 == '\0')
        {
            // return the index found
            return result;
        }
        // no match is found, increment temp pointer to next index for next search
        beg++;
        // increment index
        result++;
    }
    // s2 not found in s1, return -1
    return -1;
}

int main ()
{
    cout << "  Actual: " << findFirstOf("hello", "el") << endl;
    cout << "Expected: 1" << endl;
    cout << endl;

    cout << "  Actual: " << findFirstOf("hello", "lo") << endl;
    cout << "Expected: 3" << endl;
    cout << endl;
    
    cout << "  Actual: " << findFirstOf("hello", "elo") << endl;
    cout << "Expected: -1" << endl;
    cout << endl;
    
    cout << "  Actual: " << findFirstOf("hello", "llo") << endl;
    cout << "Expected: 2" << endl;
    cout << endl;
    
    cout << "  Actual: " << findFirstOf("hello", "lop") << endl;
    cout << "Expected: -1" << endl;
    cout << endl;
        
    cout << "  Actual: " << findFirstOf("", "zxy") << endl;
    cout << "Expected: -1" << endl;
    cout << endl;
        
    cout << "  Actual: " << findFirstOf("drumbeatings", "r") << endl;
    cout << "Expected: 1" << endl;
    cout << endl;
        
    cout << "  Actual: " << findFirstOf("productively", "prod") << endl;
    cout << "Expected: 0" << endl;
    cout << endl;
        
    cout << "  Actual: " << findFirstOf("phytoalexins", "alex") << endl;
    cout << "Expected: 5" << endl;
    cout << endl;

    cout << "  Actual: " << findFirstOf("outspreading", "t") << endl;
    cout << "Expected: 2" << endl;
    cout << endl;

    cout << "  Actual: " << findFirstOf("demographics", "r") << endl;
    cout << "Expected: 5" << endl;
    cout << endl;

    cout << "  Actual: " << findFirstOf("disreputably", "d") << endl;
    cout << "Expected: 0" << endl;
    cout << endl;

    cout << "  Actual: " << findFirstOf("granulocytes", "ulo") << endl;
    cout << "Expected: 4" << endl;
    cout << endl;

    cout << "  Actual: " << findFirstOf("metalworking", "talw") << endl;
    cout << "Expected: 2" << endl;
    cout << endl;

    cout << "  Actual: " << findFirstOf("lexicography", "cogra") << endl;
    cout << "Expected: 4" << endl;
    cout << endl;
}
