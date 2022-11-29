#include <cstddef>
#include <iostream>
using namespace std;

// Write the function myStrNCat(). The function has three parameters: a char * s1, a const char * s2, and
// an size_t max, which represents the maximum size of the s1 buffer. Append the characters in s2 to the
// end of s1. Make sure you have only one '\0' at the end of the combined characters. Don't go beyond the
// end of the buffer you are asked to copy to. The function returns a pointer to the first character in s1.

const char * myStrNCat(char * s1, const char * s2, size_t max)
{
    // temp pointer to s1
    char * s = s1;
    // loop to set pointer to the end of s1 before null
    while (*s != '\0')
    {
        s++;
    }
    // only iterate if max allocated (not 0)
    // (*s = *s2++) set *s to *s2, post increment
    while (max != 0 && (*s = *s2++) != '\0')
    {
        // decrement max until space runs our
        max--;
        // increment next allocated space in s1
        s++;
    }
    // add null to terminate copied string only if null is not present (account for empty s2)
    if (*s != '\0')
    {
        *s = '\0';
    }
    return s1;
}

int main ()
{
    char s1[50], s2[50];

    strcpy(s1, " string s1");
    strcpy(s2, " string s2");
    myStrNCat(s1 , s2, 15);

    cout << s1 << endl;
}
