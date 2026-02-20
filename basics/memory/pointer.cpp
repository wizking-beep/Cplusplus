#include <iostream>
using namespace std;

/*
 A pointer is a variable that stores the memory address
 of another variable (It is however sometimes easier to work with an address)
 Remember that the datatype of the pointer¨should be the same as
 that its representing

 & ---> address of operator
 * ---> dereference of operator
 */

int main () {
    string name = "Brian";
    string cars[] = {"mazda","dodge","ford","lambo","toyota"};
    string *pName = &name;

    //here the array is already an address no need for &
    string *pCars = cars;

    cout << pName << " is the pointer value" << '\n';
    cout << *pName << " is the dereferenced value of the pointer\n";
    cout << pCars << " is the pointer value of car array\n";
    cout << *pCars << " is the value of the first element in the array\n";

    return 0;
}
