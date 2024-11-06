#include <iostream>
using namespace std;

int main() {
    string name;
    int yearBirth;
    int currentYear = 2024;
    
    cout << "Enter your Name: ";
    cin >> name;
    
    cout << "Enter your Year of Birth: ";
    cin >> yearBirth;
    
    int ageInHundredYears = (currentYear - yearBirth) + 100;
    
    cout << "Hello " << name << ", after Hundred years your will be " << ageInHundredYears;
}