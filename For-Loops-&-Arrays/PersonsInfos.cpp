#include<iostream>
#include<string>
using namespace std;

enum enStatus { Single, Married };

struct stAdress
{
    string Country;
    string City;
};

struct stPerson
{
    string FullName;
    int Age;
    string Number;
    enStatus Status;
    stAdress Adress;
};

void ReadPersonsInfos(stPerson Person[100], int Lenght)
{
    for(int i = 0; i < Lenght; i++)
    {
        cin.ignore(1,'\n'); // clear buffer

        cout << "Enter Person " << i+1 << " infos : \n";

        cout << "Full Name : ";
        getline(cin, Person[i].FullName);
        
        cout << endl;

        cout << "Age : ";
        cin >> Person[i].Age;
        cout << endl;

        cout << "Number : ";
        cin >> Person[i].Number;
        cout << endl;

        cout << "Status : (0 = Single / 1 = Married)";
        int st;
        cin >> st;
        Person[i].Status = enStatus(st);
        cout << endl;

        cout << "Country : ";
        cin >> Person[i].Adress.Country;
        cout << endl;

        cout << "City : ";
        cin >> Person[i].Adress.City;
        cout << endl;
    }
}

void PrintPersonsInfos(stPerson Person[100], int Lenght)
{
    for(int i = 0; i < Lenght; i++)
    {
        cout << "Person " << i+1 << " Infos : \n";
        cout << "Full Name : " << Person[i].FullName << endl;
        cout << "Age : " << Person[i].Age << endl;
        cout << "Number : " << Person[i].Number << endl;
        cout << "Status : " << Person[i].Status << endl;
        cout << "City : " << Person[i].Adress.City << endl;
        cout << "Country : " << Person[i].Adress.Country << endl;   
    }
}

int main()
{
    stPerson Person[100];
    int Length;

    cout << "Please enter the number of persons you want to enter their infos (1 to 100): \n";
    cin >> Length;

    ReadPersonsInfos(Person,Length);
    cout << "***************Now Printing Infos***************\n";
    PrintPersonsInfos(Person,Length);
    
    return 0;
}