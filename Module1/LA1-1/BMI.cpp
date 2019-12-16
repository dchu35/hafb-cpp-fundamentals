#include <iostream>
using namespace std;

int main()
{
    // Calculate BMI: Weight (kg)/[Height (m)]^2
    // Floating point variables type: float, double
    // I want to make a float type variable for weight, height and bmi.
    // making the variable equal to 0 lets you initialize the starting value to zero.
    float weightmetric = 0, heightmetric = 0, bmimetric= 0;
    float weightimperial = 0, heightimperial = 0, bmiimperial= 0;
    cout << "Welcome to the BMI Program" << endl;
    cout << "What is your weight (kg)?" << endl;
    cin >> weightmetric;
    cout << "What is your height (m)?" << endl;
    cin >> heightmetric;
    
    // calculate bmi
    bmimetric = weightmetric/(heightmetric * heightmetric);
    weightimperial = weightmetric*2.2;
    heightimperial = heightmetric*0.0254;
    bmiimperial = weightimperial/(heightimperial*heightimperial);
    cout << "Your BMI (metric) is " << bmimetric << endl;
    cout << "Your BMI (Imperial) is " << bmiimperial << endl;
    return 0;
}