//program to print even numbers entered by the user
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<< " Please enter a positive number:" << endl;
    cin >> num;
    if ( num%2 == 0){
        cout << "Even number:" << num;
     // cout<< num;

    }
    else{
        cout<<"number not even";
    }
    return 0;

}