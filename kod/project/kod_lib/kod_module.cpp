#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

char* GenerateKod(int n)
{
    char * password = new char[n + 1];
    for (int i = 0; i < n; i++)
{
switch(rand() % 4)
{
case 0:
password[i] = 32 + rand() % 16;
break;
case 1:
password[i] = 47 + rand() % 11;
break;
case 2:
password[i] = 64 + rand() % 27;
break;
case 3:
password[i] = 96 + rand() % 27;
break;
}
}
password[n] = '\0';
return password;

}

