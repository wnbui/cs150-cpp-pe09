#include <cstddef>
#include <iostream>
using namespace std;

// Write the function cStrRFind(). The function has two parameters: a const char * str, and a const char *
// subs. Find the last location where subs is found in str (as an int). Return -1 if subs is not located
// in str. You may use pointer or array notation, but you cannot use any functions or classes from the
// standard library.

int cStrRFind(const char * s1, const char * s2)
{
    int result = -1; // index for found pos
    // if s1 or s2 are empty, return -1
    if (*s1 == '\0' || *s2 == '\0')
    {
        return result;
    }
    int pos = 0; // counter for position
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
         // set result to found pos
         result = pos;
      }
      // no match is found, increment temp pointer to next index for next search
      beg++;
      // increment index
      pos++;
   }
   // s2 not found in s1, return -1
   return result;
}

int main ()
{
    const char * s = "cowtown";
    cout << "  Actual: " << cStrRFind(s, "ow") << endl;
    cout << "Expected: 4" << endl;
    cout << endl;
    
    cout << "  Actual: " << cStrRFind(s, "K") << endl;
    cout << "Expected: -1" << endl;
    cout << endl;
}
