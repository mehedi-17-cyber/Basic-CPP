#include<iostream>
using namespace std;
double max_of_three(double a, double b, double c) {
    double max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    return max;
}

int main()
{
    double a,b,c;
    cout << "Enter three numbers : ";
    cin >> a >> b >> c;
    cout << "Maximum number is : " << max_of_three(a,b,c) << endl;

    return 0;
}