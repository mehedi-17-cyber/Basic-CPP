#include<iostream>
using namespace std;
void reverse_string(string& s) {
    int i = 0, j = s.length() - 1;
    while(i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}        

int main()
{
    string s;
    cout << "Enter any string : ";
    getline(cin, s);
    cout << "Original : " << s << endl;
    reverse_string(s);
    cout << "Reversed : " << s << endl;
    
    return 0;
}