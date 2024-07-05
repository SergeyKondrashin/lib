// The functions contained in this file are pretty dummy
// and are included only as a placeholder. Nevertheless,
// they *will* get included in the static library if you
// don't remove them :)
//
// Obviously, you 'll have to write yourself the super-duper
// functions to include in the resulting library...
// Also, it's not necessary to write every function in this file.
// Feel free to add more files in this project. They will be
// included in the resulting library.

// A function adding two integers and returning the result
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
// A function adding two integers and returning the result
const char* generateRandomName(int length) {
   string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string randomName;
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < length; ++i) {
        randomName += letters[rand() % letters.length()];
    }
    return randomName.data();
}


// A function doing nothing ;)
void SampleFunction1()
{
    // insert code here
}

// A function always returning zero
int SampleFunction2()
{
    // insert code here

    return 0;
}



