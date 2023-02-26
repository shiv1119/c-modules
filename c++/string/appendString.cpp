#include<iostream>
#include<string>

using namespace std;

int main(){
    string firstName = "Arrow ", lastName = "Verma", fullName;
    fullName = firstName.append(lastName);
    cout << fullName << endl;
    cout << firstName;
    return 0;
}