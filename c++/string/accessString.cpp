#include<iostream>
#include<string>

using namespace std;

int main(){
    string myName = "Arrow Verma";
    cout << "The first character in the string myNmae is: " << myName[0] << endl;
    myName[0] = 'S';
    cout << "The first character of myName string is changed: " << myName;
    return 0;
}