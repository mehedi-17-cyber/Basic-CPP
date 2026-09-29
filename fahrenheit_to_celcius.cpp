#include<iostream>
using namespace std;
double fahrenheit_to_celciu(double f) {
    return 5 * (f - 32) / 9;
}    
int main()
{
    double f;
    cout << "Enter temperature (°F) : ";
    cin >> f;
    cout << "Celcius temperature : " << fahrenheit_to_celciu(f) << "°C" << endl;
    
    return 0;
}