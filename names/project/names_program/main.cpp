#include <iostream>
#include <string>
#include "names_module.h"
using namespace std;

int main()
{
        int nameLength = 8;
   const char* randomName = generateRandomName(nameLength);
   string s(randomName);
    cout << "Random name: " << s << std::endl;
    return 0;
}


