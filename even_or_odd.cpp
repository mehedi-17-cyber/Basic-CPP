#include<iostream>
using namespace std;
string even_or_odd(int n) {
    return n % 2 == 0 ? "Even" : "Odd";
}
    
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "The number " << n << " is " << even_or_odd(n) << endl;
    
    return 0;
}