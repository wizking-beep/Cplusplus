#include <iostream>
using namespace std;

/*A null value is a special value that means
 something has no value, hence a null pointer is
 one which is not pointing at anything

 nullptr is a keyword representing a null pointer literal
 null pointers are helpful when determining if an address was successfully
 asigned to a pointer.

 Dereferencing a null pointer or or pointing to free memory
 can lead to undefined behaviour.
 */

int main () {
    int *pointer = nullptr;
    int x = 453;
    pointer = &x;

    if(pointer == nullptr){
        cout << "address not assigned\n";
    }
    else {
        cout << "address was assigned\n";
        cout << *pointer << " is its value.";
    }

    return 0;
}
