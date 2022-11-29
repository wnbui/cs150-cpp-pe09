#include <cstddef>
#include <iostream>
using namespace std;

// Write the function findFirst(). The function has two parameters: a const char * s1 pointing to
// the first character in a C-style string, and a const char * s2. Return a pointer to the first
// appearance of s2 appearing inside s1 and nullptr (0) if s2 does not appear inside s.

// You can call the function like this:

//      const char * s = "Aardvark";
//      findFirst(s, "dv")->&s[3]
//      findFirst(s, "arki")->nullptr

const char * findFirst(const char * s1, const char * s2)
{
    // while *s1 is true (not null)
    while (*s1)
    {
        // temp pointer to s1
        auto * p1 = s1;
        // temp pointer to s2
        auto * p2 = s2;
        // while *s1 (p1) and *s2 (p2) are true and *s1 matches *s2
        while (*p1 && *p2 && *p1 == *p2)
        {
            // increment both
            p1++;
            p2++;
        }
        // if *s2 reaches end (null), a match was found
        if (*p2 == '\0')
        {
            // return address in s1 where match was found
            return s1;
        }
        // match was not found, increment s1
        s1++;
    }
    // match was not found, return null
    return s1;
}

int main ()
{
    const char * s = "Aardvark";
    cout << "  Actual: " << findFirst(s, "dv") << endl;
    cout << "Expected: dvark" << endl;
    cout << endl;
    
    cout << "  Actual: " << findFirst(s, "arki") << endl;
    cout << "Expected: " << endl;
    cout << endl;
    
    cout << "  Actual: " << findFirst("hello", "el") << endl;
    cout << "Expected: ello" << endl;
    cout << endl;

    cout << "  Actual: " << findFirst("hello", "lo") << endl;
    cout << "Expected: lo" << endl;
    cout << endl;

    cout << "  Actual: " << findFirst("hello", "elo") << endl;
    cout << "Expected: " << endl;
    cout << endl;

    cout << "  Actual: " << findFirst("hello", "llo") << endl;
    cout << "Expected: llo" << endl;
    cout << endl;

    cout << "  Actual: " << findFirst("hello", "lop") << endl;
    cout << "Expected: " << endl;
    cout << endl;

    cout << "  Actual: " << findFirst("", "zxy") << endl;
    cout << "Expected: " << endl;
    cout << endl;

    cout << "  Actual: " << findFirst("drumbeatings", "r") << endl;
    cout << "Expected: rumbeatings" << endl;
    cout << endl;

    cout << "  Actual: " << findFirst("productively", "prod") << endl;
    cout << "Expected: productively" << endl;
    cout << endl;

    cout << "  Actual: " << findFirst("phytoalexins", "alex") << endl;
    cout << "Expected: alexins" << endl;
    cout << endl;

    cout << "  Actual: " << findFirst("outspreading", "t") << endl;
    cout << "Expected: tspreading" << endl;
    cout << endl;

    cout << "  Actual: " << findFirst("demographics", "r") << endl;
    cout << "Expected: raphics" << endl;
    cout << endl;

    cout << "  Actual: " << findFirst("disreputably", "d") << endl;
    cout << "Expected: disreputably" << endl;
    cout << endl;

    cout << "  Actual: " << findFirst("granulocytes", "ulo") << endl;
    cout << "Expected: ulocytes" << endl;
    cout << endl;

    cout << "  Actual: " << findFirst("metalworking", "talw") << endl;
    cout << "Expected: talworking" << endl;
    cout << endl;

    cout << "  Actual: " << findFirst("lexicography", "cogra") << endl;
    cout << "Expected: cography" << endl;
    cout << endl;
}
