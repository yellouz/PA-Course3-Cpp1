#include<iostream>
using namespace std;

int main()
{
    string name;
    cout << "please enter your name : \n";
    cin >> name;

    int age;
    cout << "please enter your age : \n";
    cin >> age;

    string city;
    cout << "please enter your city : \n";
    cin >> city;

    string country;
    cout << "please enter your country : \n";
    cin >> country;

    int MonthlySalary;
    cout << "please enter your monthly salary : \n";
    cin >> MonthlySalary;

    char gender;
    cout << "please enter your gender (M/F) : \n";
    cin >> gender;

    bool married;
    cout << "please enter your marriage status (1/0) : \n";
    cin >> married;

    //display all informations:
    cout << "*****************************" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Monthly Salary: " << MonthlySalary << endl;
    cout << "Yearly Salary: " << MonthlySalary * 12 << endl;
    cout << "Gender: " << gender << endl;
    cout << "Married: " << married << endl;
    cout << "*****************************" << endl;

    return 0;
}