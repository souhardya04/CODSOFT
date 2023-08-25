#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
 
int main()
{
 
    cout << "Welcome to GuessTheNumber game!"
         << endl;
    cout << "You have to guess a number between 1 and 100. "

         << endl;
 
        
        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int playerChoice;
        
        
        for (int i = 1; i <= 100; i++) {


 
                
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;
 
                
                if (playerChoice == secretNumber) {
                    cout << "Well played! You won, "
                         << playerChoice
                         << " is the secret number" << endl;
                    cout << "Thanks for playing...."
                         << endl;
                   
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                         << " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                }
}
}