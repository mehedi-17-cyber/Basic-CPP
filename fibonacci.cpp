#include<iostream>
using namespace std;
int fib(int n) {
    return n == 0 ? 0 : n == 1 ? 1 : fib(n - 1) + fib(n - 2);
}    
void fibonacci(int n) {
    for(int i = 0; i < n; i++) {
        cout << fib(i);
        if(i < n - 1) cout << ",";
    }
}        
int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;
    cout << "Fibonacci numbers : ";
    fibonacci(n);
    
    return 0;
}