#include <iostream> 
#include <string>    
#include <ctime>     
#include <cstdlib>  

// Function for showing  progress of the guessed word
void showing(const std::string& word, const std::string& progress);

//  gets a letter guess from the guesser
char getguess();

//   updates the progress of the guessed word based on the guesser's guess
bool nextword(const std::string& word, std::string& progress, char guess);

// Main game function 
void startGame();


	
