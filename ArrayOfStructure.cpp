#include <iostream>

using namespace std;

struct info
{
  string firstName, lastName, phone;
  unsigned short age;
};

void readPerson1(info &person)
{
    cout << "Enter your first name : ";
    cin >> person.firstName;
    
    cout << "Enter your last name : ";
    cin >> person.lastName;
    
    cout << "Enter your age : ";
    cin >> person.age;
    
    cout << "Enter your phone : ";
    cin >> person.phone;
}

void printPerson1(info person)
{
    cout << person.firstName << endl
        <<  person.lastName << endl
        << person.age <<  endl
        << person.phone << endl;
}

void readPerson2(info &person)
{
    cout << "Enter your first name : ";
    cin >> person.firstName;
    
    cout << "Enter your last name : ";
    cin >> person.lastName;
    
    cout << "Enter your age : ";
    cin >> person.age;
    
    cout << "Enter your phone : ";
    cin >> person.phone;
}

void printPerson2(info person)
{
    cout << person.firstName << endl
        <<  person.lastName << endl
        << person.age <<  endl
        << person.phone << endl;
}

void readPersons(info person[2])
{
    cout << "read Person1\n";
    readPerson1(person[0]);
    
    cout << "read Person2\n";
    readPerson2(person[1]);
}

void printPersons(info person[2])
{
    cout << "Print person1\n";
    printPerson1(person[0]);
    
    cout <<  "Print person2\n";
    printPerson2(person[1]);
}

int main()
{
	  info person[2];
	  
	  readPersons(person);
	  printPersons(person);
	  
	  return 0;
}