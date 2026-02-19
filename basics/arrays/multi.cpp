#include <iostream>
using namespace std;

/*
 A multidimensional array is an array made up of
 separate arrays.
 They can represent a grid of data in rows and
 columns.
 In the 2d array below the first '[]' represents the
 rows while the second '[]' represents the columns.
 */

int main(){
    string cars[][3] = {{"Mustang","Escape","F-150"},
                        {"Corvette", "Equinox", "Silverado"},
                        {"Challenger","Durango","Ram-1500"}};
/*
 Cumbersome display:
 cout << cars[0][0] << " ";
 cout << cars[0][1] << " ";
 cout << cars[0][2] << " \n";
 cout << cars[1][0] << " ";
 cout << cars[1][1] << " ";
 cout << cars[1][2] << " \n";
 cout << cars[2][0] << " ";
 cout << cars[2][1] << " ";
 cout << cars[2][2] << " \n";
 */

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << cars[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
