#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int shifr(char* word)
{
        unsigned int i;
    srand(time(NULL));
    int kod;
string s(word);
    for (i = 0; i < 10; i++)
    {
            kod += (s[i]);
    }
    return kod;
}

