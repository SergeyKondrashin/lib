#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "unity2_module.h"
using namespace std;

int main()
{
        int nameLength = 8;
   const char* randomName = generateRandomName(nameLength);
   string s(randomName);
    cout << "Random name: " << s << endl;

    srand(time(NULL));
int N = 8 + rand() % 32;
while(true){
if ((N < 8) || (N > 32)) N = 8 + rand() % 32;
else if ((N >= 8) && (N <= 32)) break;
}
cout << "Random kod: "<< GenerateKod(N) << endl;

char* word=new char[10];
cout << "enter the password you want to encrypt:";
cin >> word;
cout << "encryption: " <<shifr(word) << endl;
    return 0;
}

