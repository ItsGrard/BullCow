#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
void PlayGame();
std::string GetGuess();
void PrintBack(std::string guess);
bool AskToPlayAgain();
int main(){
  do {

  PrintIntro();
  PlayGame();
}
  while (AskToPlayAgain() == true);
  return 0;
  }

void PlayGame(){
  FBullCowGame BCGame; //Instantiate
   constexpr int NUMBER_OF_TURNS = 5;
   for (int i = 0; i< NUMBER_OF_TURNS; ++i){
    PrintBack(GetGuess());
    std::cout << std::endl;
  }
    return;
}

//Introduce the game
void PrintIntro(){
   constexpr int WORLD_LENGHT = 9;
 std::cout << std::endl << "----------------------" << std::endl <<"Welcome to Bull and Cows, a fun word game. " << std::endl;
 std::cout << "Can you guess the " << WORLD_LENGHT << " letter isogram I'm thinking of?" << std::endl;
 return;
}
 //Ask for guess
std::string GetGuess(){
 std::string guess = "";

   std::cout << std::endl << "What's your guess?" << std::endl;
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
