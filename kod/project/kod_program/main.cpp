#include <iostream>
#include <cstdlib>
#include <ctime>
#include "kod_module.h"
using namespace std;

int main(){
srand(time(NULL));
int N = 8 + rand() % 32;
while(true){
if ((N < 8) || (N > 32)) N = 8 + rand() % 32;
else if ((N >= 8) && (N <= 32)) break;
}
cout << GenerateKod(N);
return 0;
}
