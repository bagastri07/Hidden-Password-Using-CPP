#include <iostream>
#include <conio.h>

using namespace std;

struct admin {
    string username;
    string password;
};
void loadDataAdmin(admin &adm) {
    adm.username = "Admin", adm.password = "imAdmin";
}

void insertPasword(string &password) {
    char pass[32];
    char ch;
    bool Enter = false;
    int i = 0;
    while (!Enter) { // looping forever
        password = "";
        ch = _getch();
        if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')) {
            pass[i]=ch; //store the ch to the pass
            cout << '*';
            i++;
        }
        if (ch=='\b' && i>=1) {
            cout << "\b \b"; //to delete wrong character that user input
            i--;
        }
        if (ch=='\r') { //r is Enter or 13 charecter code (enter)
            Enter = true;
        }
    }
    password = pass;
}

void loginAdmin(admin adm) {
    string usrnm, pswrd;
    cout << "Username : ";
    cin >> usrnm;
    cout << "Password : ";
    insertPasword(pswrd);

    if (usrnm == adm.username && pswrd == adm.password) {
        cout << "\n\nAcces Granted!!! \n";
    } else {
        cout << "\n\nAcces Denied \n";
    }
}

int main() { //Example How to Use it
    admin Admin;

    loadDataAdmin(Admin);
    loginAdmin(Admin);
}
