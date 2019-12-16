#include <iostream>
#include <cmath>
using namespace std;

// Constants
const float kInchesToMeter = 0.0254;
const float kKilotoPound = 2.2074; 
const float kBMIImperial = 703;
const float kLowBMILimit = 18.5;
const float kHighBMILimit = 24.9;

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
    // 1 in = 0.0254 m, 1 kg = 2.204 lbs
    weightimperial = weightmetric*kKilotoPound;
    heightimperial = heightmetric/kInchesToMeter;
    bmiimperial = (weightimperial*kBMIImperial)/(heightimperial*heightimperial);
    cout << "Your BMI (metric) is " << bmimetric << "." << endl;
    cout << "Your BMI (Imperial) is " << bmiimperial << "." << endl;
    
    // Print if they are in the "good" range: BMI is in the 18.5 to 24.9
    if(bmimetric > kLowBMILimit && bmimetric < kHighBMILimit)
    {
        cout << "Your BMI " << bmimetric << " is good." << endl;

    }
    else
    {
      cout << "Your BMI " << bmimetric << " is bad." << endl;  
    }
    cout << "Thanks for using the BMI Program." << endl;
    return 0;
}

