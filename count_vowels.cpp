#include<iostream>
#include<string.h>
using namespace std;
int count_vowels(string s) {
    int count = 0;
    for(char c : s) {
        c = tolower(c);
        if(c == 'a' ||
           c == 'e' ||
           c == 'i' || 
           c == 'o' ||
           c == 'u'
        ) count++;
    }
    return count;
}        
int main()
{
    string s;
    cout << "Enter a string : ";
    getline(cin, s);
    cout << "Total vowels : " << count_vowels(s) << endl;
    
    return 0;
}