#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;
    cout << "Welcome to the BMI Calculator!" << endl;
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;

    while (weight < 0 || height < 0) {
        cout << "Invalid input. Please enter positive values for weight and height." << endl;
    } 
    bmi = weight / (height * height);
    cout << "Your BMI is: " << bmi << endl;
    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "You are normal weight." << endl;
    } else if (bmi >= 25 && bmi < 29.9) {
        cout << "You are overweight." << endl;
    } else {
        cout << "You are obese." << endl;
    }
    return 0;   
}