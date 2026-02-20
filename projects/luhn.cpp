#include <iostream>
using namespace std;

/*-->Double every second digit from right to left
 If doubled number is two digits split them.
 -->Add all single digits from step 1.
 -->Add all odd numbered digits from right to left using the original number
 -->Sum results from steps 2 and 3
 -->If the result above is divisible by 10, the credit
 card is valid.
 */

 int getDigit (const int number);
 int sumOddDigits(const string cardNumber);
 int sumEvenDigits(const string cardNumber);

int main () {
    string cardNumber;
    int result = 0;

    cout << "Enter a credit card number: ";
    cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0){
        cout << cardNumber << " is valid";
    } else {
        cout << cardNumber << " is invalid";
    }

    return 0;
}

int getDigit (const int number) {
    return number % 10 + (number/10 % 10);
};
int sumOddDigits(const string cardNumber) {
    int sum = 0;

    for(int i = cardNumber.size() -1; i >= 0; i-= 2){
        sum += cardNumber[i] - '0';
    }
    return sum;
};
int sumEvenDigits(const string cardNumber) {
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i-=2) {
        sum += getDigit((cardNumber[i] - '0')*2);
    }
    return sum;
};
