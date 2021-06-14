// functionWithParameters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void introduceMe(string name, string city, int age = 0 /*default parameter*/)

int main()
{
	string name, city;
	int age;
	cout << "Name: ";
	cin >> name;
	cout << "City: ";
	cin >> city;
	cout << "Age: ";
	cin >> age;
	introduceMe(name,city,age);
}

void introduceMe(string name, string city, int age = 0 /*default parameter*/) {
	cout << "My name is " << name << endl;
	cout << "I am from " << city << endl;
	if (age != 0) {
		cout << "I am " << age << " years old." << endl;
	}
}