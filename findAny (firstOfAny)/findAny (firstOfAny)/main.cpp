#include <cstddef>
#include <iostream>
using namespace std;

// Write the following function without using the C++ string class or any functions in the standard library, including strlen(). You may use pointers, pointer arithmetic or array notation.

// Write the function firstOfAny(). Same as function findAny (#4 in Sample Problems)

// The function has two parameters (str1, str2), both pointers to the first character in a C-style string.
// You should be able to use literals for each argument.
// The function searches through str1, trying to find a match for any character inside str2.
// Return a pointer to the first character in str1 where this occurs.
// Note that if no characters from str2 appear in str1, the pointer will point to the NUL character at the end of str1.

// You can call the function like this:

//      cout << firstOfAny("ZZZZuker", "aeiou"); // prints uker
//      cout << firstOfAny("ZZZzyx", "aeiou"); // prints nothing (pointing at '\0')

const char * firstOfAny(const char * str1, const char * str2)
{
       // while str1 is true (not null)
       while (*str1)
       {
          // pointer set to str2 (through p1)
          auto * p2 = str2;
          // while iterating through str2 (p2) and *str1 does not match *str2 (p2)
          while (*p2 && *str1 != *p2)
          {
             // keep incrementing
             p2++;
          }
          // if element in str2 (p2) is not null, a match was found, break from loop
          if (*p2 != '\0')
          {
             break;
          }
          // no match was found in current element, increment pointer (str1)
          str1++;
       }
       return str1;
}

int main ()
{
    cout << "  Actual: " << firstOfAny("ykmoqaceacegiacegikmoqsuwgikmoqsuwysuwy", "qiuu") << endl;
    cout << "Expected: qaceacegiacegikmoqsuwgikmoqsuwysuwy" << endl;
    cout << endl;
    
    cout << "  Actual: " << firstOfAny("acegiqacegikmoqsuwysuwyacegikmoqsuwykmo", "wgeq") << endl;
    cout << "Expected: egiqacegikmoqsuwysuwyacegikmoqsuwykmo" << endl;
    cout << endl;
    
    cout << "  Actual: " << firstOfAny("oqacegikmoqsuwysuwyacegiacegikmoqsuwykm", "qqfk") << endl;
    cout << "Expected: qacegikmoqsuwysuwyacegiacegikmoqsuwykm" << endl;
    cout << endl;
    
    cout << "  Actual: " << firstOfAny("acegiacegikmoqsuwykmoqacegikmoqsuwysuwy", "gxcw") << endl;
    cout << "Expected: cegiacegikmoqsuwykmoqacegikmoqsuwysuwy" << endl;
    cout << endl;
    
    cout << "  Actual: " << firstOfAny("acegikmoqsuwy", "uzuq") << endl;
    cout << "Expected: qsuwy" << endl;
    cout << endl;
    
    cout << "  Actual: " << firstOfAny("bdfhjlnprtvxz", "xifz") << endl;
    cout << "Expected: fhjlnprtvxz" << endl;
    cout << endl;
    
    cout << "  Actual: " << firstOfAny("", "fzic") << endl;
    cout << "Expected: " << endl;
    cout << endl;
    
    cout << "  Actual: " << firstOfAny("gikmoqsuwyace", "i") << endl;
    cout << "Expected: ikmoqsuwyace" << endl;
    cout << endl;
    
    cout << "  Actual: " << firstOfAny("oqacegikmoqsuwysuwyacegiacegikmoqsuwykm", "?/!<") << endl;
    cout << "Expected: " << endl;
    cout << endl;
    
    cout << "  Actual: " << firstOfAny("gikmoqsuwyace", "e") << endl;
    cout << "Expected: e" << endl;
    cout << endl;
    
    cout << "  Actual: " << firstOfAny("?qq", "q") << endl;
    cout << "Expected: qq" << endl;
    cout << endl;
    
    cout << "  Actual: " << firstOfAny("bdfhjlnprtvxz", "kmff") << endl;
    cout << "Expected: fhjlnprtvxz" << endl;
    cout << endl;
    
    cout << "  Actual: " << firstOfAny("acegikmoqsuwy", "zsus") << endl;
    cout << "Expected: suwy" << endl;
    cout << endl;
    
    cout << "  Actual: " << firstOfAny("acegiacegikmoqsuwykmoqacegikmoqsuwysuwy", "fxgm") << endl;
    cout << "Expected: giacegikmoqsuwykmoqacegikmoqsuwysuwy" << endl;
    cout << endl;
    
    cout << "  Actual: " << firstOfAny("oqacegikmoqsuwysuwyacegiacegikmoqsuwykm", "kiwu") << endl;
    cout << "Expected: ikmoqsuwysuwyacegiacegikmoqsuwykm" << endl;
    cout << endl;
    
    cout << "  Actual: " << firstOfAny("acegiqacegikmoqsuwysuwyacegikmoqsuwykmo", "gxsf") << endl;
    cout << "Expected: giqacegikmoqsuwysuwyacegikmoqsuwykmo" << endl;
    cout << endl;
    
    cout << "  Actual: " << firstOfAny("ykmoqaceacegiacegikmoqsuwgikmoqsuwysuwy", "zgmu") << endl;
    cout << "Expected: moqaceacegiacegikmoqsuwgikmoqsuwysuwy" << endl;
    cout << endl;
 }
