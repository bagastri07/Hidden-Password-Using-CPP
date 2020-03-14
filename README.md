# Hidden-Password-Using-CPP
This is how to insert hidden password in C++
```
void insertPasword(string &password) {
    char pass[32]; // to store the password
    char ch; // a variable for store input one by one per 'character'
    bool Enter = false; // *variabel for make the looping stop*
    int i = 0; // *Indexing for char pass[32]*
    while (!Enter) { // *looping forever*
        password = "";
        ch = _getch(); // getch() will input the user input without show it on the terminal
        if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')) { // *to make the input just numeric and alphabet*
            pass[i]=ch; // store the ch to the pass
            cout << '*'; // after the user input one character, on the terminal will be show "*"
            i++;
        }
        if (ch=='\b' && i>=1) {
            cout << "\b \b"; // to delete wrong character that user input. /b = backspace
            i--;
        }
        if (ch=='\r') { // /r is Enter. You may to use 13 because it's the character code of enter
            Enter = true;
        }
    }
    password = pass; // to convert the character primitiv to be a string
}
```
### Thanks for Visiting^^
> Author : **Bagas Tri Wibowo**

### END of Readme
