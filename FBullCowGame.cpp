#include "FBullCowGame.h"
#include <iostream>
#include <string>
using int32 = int;
using string = std::string;

const string Hidden_Word = "planet";
string MyHiddenWord = Hidden_Word;

FBullCowGame::FBullCowGame(){ //Constructor, resets game every time it's called
  ResetGame();
}
int32 FBullCowGame::SetCurrentTry(int32 settry){
return myTries = settry;
}

void FBullCowGame::ResetGame(){ // Resets game values
  myTries = 1;
  maxTries = 5;
}
int32 FBullCowGame::GetMaxTries() const{ //Returns the max number of possbile tries
  return maxTries;
}
int32 FBullCowGame::GetHighScore() const{
  return 0;
}
int32 FBullCowGame::GetCurrentTry() const{
  return myTries;
}

BullCowCount FBullCowGame::SubmitGuess(string s){

    int32 Hidden_Word_length = MyHiddenWord.length();
    BullCowCount BullCowCountS;
  if (Hidden_Word_length == s.length()){
    myTries++;
    for (int32 i = 0; i< Hidden_Word_length; i++) {
      for(int32 j = 0; j<Hidden_Word_length; j++){ //He got here Hidden_Word_length instead of s.length
        if (s[j] == Hidden_Word[i]){
          if (j==i) BullCowCountS.Bulls++; 
          else BullCowCountS.Cows++;
        }
      }
    }
  }
  else {std::cout << std::endl << "Incorrect length, try again." << std::endl;
      }
    return BullCowCountS;
  }

bool FBullCowGame::checkGuessValidity(std::string guess){ // TODO Checks if the guess is valid

  return false;
}
bool FBullCowGame::isWon() const{ // TODO Checks if the game has been won
  return false;
}
