#include <iostream>
using namespace std;

/*
 Here we compare pass by value and pass by reference.
 Pass by value creates copies of the original value.
 If you need to mutate the value of the original then you
 have to pass the necessary reference.
 */

void passByValue(string x ,string y);
void passByReference(string &x,string &y);

int main () {
    string x = "juice";
    string y = "water";
    /*If this chunk is removed and the passByValue(x,y) used then
     the variables x and y retains their value as they
     are passed as values
    string temp;
    temp = x;
    x = y;
    y = temp;*/

    passByReference(x,y);

    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';

    return 0;
}

void passByValue(string x ,string y) {
    string temp;
    temp = x;
    x = y;
    y = temp;
}

void passByReference(string &x ,string &y) {
    string temp;
    temp = x;
    x = y;
    y = temp;
}
