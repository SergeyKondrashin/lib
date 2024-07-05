#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "shifr2_module.h"
using namespace std;

int main()
{
char* word=new char[10];
cout << "enter the password you want to encrypt:";
cin >> word;
cout << "encryption: " <<shifr(word) << endl;
    return 0;
}

