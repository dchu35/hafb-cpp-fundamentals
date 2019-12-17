#include <iostream> // system library
#include "factor.h" // local library, checks all instances of calling this header
using namespace std;

int main() 
{
    int input;
    FactorMod3();
    cout << "Enter a value between 1 through 30: " << endl;
    cin >> input;
    FactorModX(input);
    return 0;
}