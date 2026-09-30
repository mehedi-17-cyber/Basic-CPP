#include<iostream>
using namespace std;
int sum_of_digits(int n) {
    int sum = 0;
    while(n) {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
        
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "Your number : " << n << endl;
    cout << "Sum of digits : " << sum_of_digits(n) << endl;
    
    return 0;
}