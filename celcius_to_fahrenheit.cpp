#include<iostream>
using namespace std;
double celcius_to_fahrenheit(double c) {
    return 9 * c / 5 + 32;
}    
int main()
{
    double c;
    cout << "Enter temperature (°C) : ";
    cin >> c;
    cout << "Fahrenheit temperature : " << celcius_to_fahrenheit(c) << "°F" << endl;
    
    return 0;
}