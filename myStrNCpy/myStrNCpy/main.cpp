#include <cstddef>
#include <iostream>
using namespace std;

// Write the function myStrNCpy(). The function has three parameters: a char * dest, a const char * src,
// and an int max, which represents the maximum size of the destination buffer. Copy the characters in src
// to dest, but don't copy more than max-1 characters. Make sure you correctly terminate the copied
// string. The function returns a pointer to the first character in dest.

const char * myStrNCpy(char * dest, const char * src, int max)
{
    int i = 0, j = 0;
    while(dest[j++]);
    j--;
    while(j < max - 1 && src[i])
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return dest;
}

int main ()
{
    char src[] = "Hello";
    char dest[] = "";
    myStrNCpy(dest, src, 5);

    cout << "  Actual: " << dest <<endl;
    cout << "Expected: Hell" << endl;
    cout << endl;
}
