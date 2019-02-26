#include <iostream>
#include <string>
#include "FBullCowGame.h"

using int32 = int;
using string = std::string;
void PrintIntro(); //Print brief introduction
void PlayGame();
std::string GetGuess(); // Asks for input and returns what the user has input
void PrintBack(std::string guess); // Gets a string input and returns it (should be getGues())
bool AskToPlayAgain(); // Asks to play again, returns true if yes
FBullCowGame BCGame; //Instantiate
int main(){
  do {
  BCGame.ResetGame();
  PrintIntro();
  PlayGame();
}
  while (AskToPlayAgain() == true);
  return 0;
  }

void PlayGame(){
  int32 maxTries = BCGame.GetMaxTries();
  // TODO change for to while when validating
   for (int32 i = 0; i< maxTries; ++i){
    PrintBack(GetGuess()); // TODO Check it
    std::cout << std::endl;
    // Return the valid GetGuess
    // Print number of bulls and cows
    BCGame.SetCurrentTry(BCGame.GetCurrentTry()+1);
  }
    return;
}

//Introduce the game
void PrintIntro(){
   constexpr int32 WORLD_LENGHT = 9;
 std::cout << std::endl << "----------------------" << std::endl <<"Welcome to Bull and Cows, a fun word game. " << std::endl;
 std::cout << "Can you guess the " << WORLD_LENGHT << " letter isogram I'm thinking of?" << std::endl;
 return;
}
 //Ask for guess
std::string GetGuess(){
 std::string guess = "";

   std::cout << std::endl << "Current try: " << BCGame.GetCurrentTry()<< ". What's your guess?" << std::endl;
   getline(std::cin, guess);
   return guess;
}
//Prints the guess back on screen
void PrintBack(std::string guess){
     std::cout << "Your guess was " << guess << "." << std::endl;
}
//Returns true if the user input starts with 'y' or 'Y' if user wants to play again
bool AskToPlayAgain(){
  bool res = false;
  std::cout <<"Do you want to play again? ";
  std::string response = "";
  getline(std::cin, response);
  if (response[0] == 'y' || response [0] == 'Y') res = true;
  return res;
}
