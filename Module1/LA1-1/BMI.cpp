#include <iostream>
using namespace std;

int main()
{
    // Calculate BMI: Weight (kg)/[Height (m)]^2
    // Floating point variables type: float, double
    // I want to make a float type variable for weight, height and bmi.
    // making the variable equal to 0 lets you initialize the starting value to zero.
    float weight = 0, height = 0, bmi= 0;
    cout << "Welcome to the BMI Program" << endl;
    cout << "What is your weight (kg)?" << endl;
    cin >> weight;
    cout << "What is your height (m)?" << endl;
    cin >> height;
    
    // calculate bmi
    bmi = weight/(height * height);
    cout << "Your BMI is " << bmi << endl;

    return 0;
}