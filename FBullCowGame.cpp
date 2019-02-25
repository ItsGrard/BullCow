#include "FBullCowGame.h"
#include <string>


FBullCowGame::FBullCowGame(){ //Constructor, resets game every time it's called
  ResetGame();
}
int FBullCowGame::SetCurrentTry(int settry){
return myTries = settry;
}

void FBullCowGame::ResetGame(){ // Resets game values
  myTries = 1;
  maxTries = 5;
}
int FBullCowGame::GetMaxTries() const{ //Returns the max number of possbile tries
  return maxTries;
}
int FBullCowGame::GetHighScore() const{
  return 0;
}
int FBullCowGame::GetCurrentTry() const{
  return myTries;
}

bool FBullCowGame::checkGuessValidity(std::string guess){ // TODO Checks if the guess is valid
  return false;
}
bool FBullCowGame::isWon() const{ // TODO Checks if the game has been won
  return false;
}
