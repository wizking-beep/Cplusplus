#include <iostream>
using namespace std;

/*The const parameter is used for code that is
you want to be accessed as read-only,therefore no mutation.
Useful for references and pointers.
 */
void printInfo(const string name,const int age);

int main () {
    string name = "Brian";
    int age = 21;

    printInfo(name,age);

    return 0;
}

void printInfo(const string name,const int age) {
    /*
     Changing of received variables is restricted
     like you cant do:
     name = "Kelvin";
     age = 25;'
     THis is even when the references are passed too.
     */
    cout << name << '\n';
    cout << age << '\n';
}
