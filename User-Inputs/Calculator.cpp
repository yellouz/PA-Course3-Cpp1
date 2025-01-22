#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "please enter 3 numbers : " << endl;
    cin >> a;
    cin >> b;  
    cin >> c;
    int sum = a+b+c;

    cout << a << " +" << endl;
    cout << b << " +" << endl;
    cout << c << endl;
    cout << "------------------" << endl;
    cout << "Total = " << sum;

    return 0;
}
