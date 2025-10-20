#include <iostream>
using namespace std;
string username;
string password;
string valasz;
void Reg() {
    cout << "Username:" << endl;
    cin >> username;
    cout << "Password:" << endl;
    cin >> password;
    cout << "Your data "<< username << " and "<< password << endl;

}
void Belepes() {
    cout << "Username:" << endl;
    cin >> username;
    cout << "Password:" << endl;
    cin >> password;
    if (username == "Admin" and password == "Admin123") {
        cout << "You are logged in!" << endl;
    }

}
void Start() {
    cout << "Program startig" << endl;
    cout <<"###login or register###" << endl;
    cout << "####Just login or register worlds  are accepted!####" << endl;
    cin >> valasz;
    if (valasz == "login") {
        Belepes();
    }
    else if (valasz == "register") {
        Reg();
    }
    else {
        cout <<"Error the program RESTART"<< endl;
        Start();
    }
}

int main() {
    Start();
}
