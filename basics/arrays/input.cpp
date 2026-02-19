#include <iostream>
using namespace std;

int main () {
    string fruits[5];
    int size = sizeof(fruits)/sizeof(fruits[0]);
    string temp;

    for(int i = 0; i < size; i++){
        cout << "Enter a fruit you want(press q to quit): \n" << i+1 << ": ";
        getline(cin,temp);

        if(temp == "q"){
            break;
        } else{
            fruits[i] = temp;
        }
    }

    cout << "You entered the following fruits: \n";

    for(int i = 0; !fruits[i].empty(); i++) {
        cout << fruits[i] << '\n';
    }

    return 0;
}
