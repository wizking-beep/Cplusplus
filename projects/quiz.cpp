#include <iostream>
using namespace std;

int main () {
    string questions[] = {
        "1.What year was c++ invented?: ",
        "2.Who invented C++?: ",
        "3.What is the predecessor of C++?: ",
        "4.What is the equivalent of semicolon in programming to a real language?: "};

    string options[][4] ={
                        {"A. 1960","B. 1970","C. 1914","D. 1985"},
                        {"A. Guido van Rossom", "B. Bjarne Stroustrup", "C. Mark Zuckerberg","D. John Carmack"},
                        {"A. C", "B. C#", "C. C--", "D. B++"},
                        {"A. fullstop","B. questionmark","C. colon","D. exclamation"}};

    char answerKey[] = {'D','B','A','A'};

    int size = sizeof(questions)/sizeof(questions[2]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++) {
        cout << "------------------------------------------------\n";
        cout << questions[i] << '\n';

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++) {
            cout << options[i][j] << '\n';
        }

        cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            cout << "You got it right!\n";
            score++;
        } else{
            cout << "You are wrong! The answer is: " << answerKey[i] << '\n';
        }
    }

    cout << "*******GAME FINISHED*******\n";
    cout << "Correct answers: " << score << '\n';
    cout << "Questions attempted: " << size << '\n';
    cout << "Your score: " << (score/(double)size)*100 << "%";


    return 0;
}
