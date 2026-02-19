#include <iostream>
using namespace std;

/*
 A memory address is a location in memory where data is
 stored.
 It can be accessed using &
 */

int main () {
    string name = "Bro";
    int age = 21;
    bool student = true;

    cout << &name << '\n';
    cout << &age << '\n';
    cout << &student << '\n';

    return 0;
}
