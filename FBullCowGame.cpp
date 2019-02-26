#include "FBullCowGame.h"
#include <string>
using int32 = int;
using string = std::string;

const string Hidden_Word = "planet";
MyHiddenWord = Hidden_Word;

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

BullCowCount FBullCowGame::SubmitGuess(strin s){
    myTries++;
    BullCowCount BullCowCount
    return BullCowCount;
}

bool FBullCowGame::checkGuessValidity(std::string guess){ // TODO Checks if the guess is valid
  return false;
}
bool FBullCowGame::isWon() const{ // TODO Checks if the game has been won
  return false;
}
