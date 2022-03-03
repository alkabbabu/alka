// alka.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
class Reg {
public:
	string username, password,secretcode;
};
class Login {
public:
	string yourUsername, yourPassword;

};
int main() {
	Reg User;
	cout << "Enter your username:";
	cin >> User.username;
	cout << "Enter your password:";
	cin >> User.password;
	cout << "Enter a secretcode:";
	cin >> User.secretcode;
	cout << "REGISTERED SUCCESSFULLY,PLEASE LOGIN";

	Login login;
	cout << "\nEnter username:";
	cin >> login.yourUsername;
	cout << "Enter password:";
	cin >> login.yourPassword;

	if (login.yourUsername != User.username && login.yourPassword != User.password) {
		cout << "Sorry!login failed";


	}
	else {
		cout << "login success";
		system("pause");
	}


}
