#include <iostream>
using namespace std;
void PrintName(string name){
    cout<< "Hey " <<name<<endl;
}

int main(){
    string name;
    cout<< "Enter name:";
    cin>> name;
    PrintName(name);

    string name1;
    cout<< "Enter name:";
    cin>>name1;
    PrintName(name1);
    return 0;
}