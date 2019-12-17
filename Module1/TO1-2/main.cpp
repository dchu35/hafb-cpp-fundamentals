#include <iostream> // system library
#include "factor.h" // local library, checks all instances of calling this header
using namespace std;

int main() 
{
    int input;
    // FactorMod3();
    // cout << "Enter a value between 1 through 30: " << endl;
    // cin >> input;
    // FactorModX(input);
    unsigned int count = GetFactorModXRange(5, 500);
    cout << "You got: " << count << endl;
    auto count2 = GetFactorModXRange(2, 500);
    cout << "You got: " << count2 << endl;
    return 0;
}