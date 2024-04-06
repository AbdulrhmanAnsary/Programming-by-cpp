#include <iostream>

using namespace std;

struct stInfo
{
    string name, country, city;
    unsigned short age;
};

void readInfo(stInfo &info)
{
    cout << "Enter your name : ";
    cin >> info.name;

    cout << "Enter your age : ";
    cin >> info.age;

    cout << "Enter your country : ";
    cin >> info.country;

    cout << "Enter your city : ";
    cin >> info.city;
}

void printInfo(stInfo info)
{
    cout << "\n******************************\n"
         << "Name : " << info.name << endl
         << "Age : " <<  info.age << endl
         << "Country : " << info.country << endl
         << "City : " << info.city << endl
         << "******************************\n";
}

int main()
{
    stInfo info;

    readInfo(info);
    printInfo(info);

    return 0;
}