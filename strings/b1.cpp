#include <iostream>
using namespace std;

int main (){
    string s = "Anujya";
    int len = s.length();
    s[len-3] = 'g';
    cout<< s;

    return 0;
}