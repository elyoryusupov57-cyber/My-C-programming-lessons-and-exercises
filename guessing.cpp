#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "guessing.h" 

using namespace std;

string words[20] = {
    "table", "iphone", "notebook", "dream", "curtain",
    "headphone", "juice", "head", "leaves", "cution", // 20 words  randomly chosen for guess
    "wife", "sight", "apple", "windows", "sports",
    "mouth", "slave", "peace", "cloud", "jaguar"
};

int penalty = 0;        //  wrong guesses so it adds up  as the proccess
int scored = 0;         //  correctly guessed words
bool used[20] = { false }; //  words  used before

void showing(const string& word, const string& progress) { // Displaying the current guessed progress 
    cout << "Word: ";
    for (size_t i = 0; i < progress.length(); i++) {
        cout << progress[i] << ' '; // Displaying the current guessed progress of the word with spaces
    }
    cout << endl;
}

//  function prompt the user to input a letter 
char getguess() {
    char ch;
    cout << "Guess a letter (or 0 to quit): "; // iether that leeter or puting 0 ends the proccess
    cin >> ch;
    return ch;
}

//  if the guess was correct it returns to true
bool nextword(const string& word, string& progress, char guess) 
{ 
    bool found = false;
    for (size_t i = 0; i < word.length(); i++) 
	{
        if (word[i] == guess && progress[i] == '.') // if guessed letter is found in word  it updates the progress
		 {
            progress[i] = guess; // Reveal the letter
            found = true;
        }
    }
    return found;
}


void startGame() 
{  //   used a loop where the player tries to guess 5 words
    srand(time(0)); // Seed random generator

    while (scored < 5 && penalty < 10) 
	{ // Stop if player scores 5 or gets 10 penalties
        int index;
        do {
            index = rand() % 20; // Randomly pick a word 
        } while (used[index]);   // Ensuring the word is not used

        string currentWord = words[index];             // Getting the selected word
        string progress(currentWord.length(), '.');    // Initializing progress with dots and hidden
        used[index] = true;                            //  after the proccess marking word  used

        cout << "\n#####--- New Round ---#####\n";
        while (progress != currentWord && penalty < 10) {
            showing(currentWord, progress);            //  showing the word progress and penalty points
            cout << "Penalty Points: " << penalty << endl;

            char letter = getguess();                  // Asking  to guess a letter
            if (letter == '0') {                       // if he or she quits she can press 0 and game ends
                cout << "You quit. You lose the game!" << endl;
                return;
            }

            if (nextword(currentWord, progress, letter)) {
                cout << "Good guess! Keep it up!" << endl;
            } else {
                penalty++;                             // adding up the  penalty if guessed wrongly
                cout << "Wrong guess! Try again!" << endl;
            }
        }

        scored++; // somehow  guessed correctly it adds up the score
        cout << "You guessed it correctly: " << currentWord << endl; 

        //  5 penalty points minus if it is high tha  that
        if (penalty >= 5) {
            penalty -= 5;
            cout << "5 penalty points burned!" << endl;
        }

        cout << "You guessed: " << scored << " | Penalty: " << penalty << endl;
    }

    if (scored == 5) {
        cout << "excellent !! You won!!" << endl; // if you guessed the all 5 words then it show  iether two of this statement
    } else {
        cout << "Game over!! You lose!! Words guessed: " << scored << endl;
    }
}

