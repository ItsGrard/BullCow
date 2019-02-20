#include "FBullCowGame.h"
#include <string>


int FBullCowGame::SetCurrentTry(int settry){
return myTries = settry;
}

void FBullCowGame::ResetGame(){
}
int FBullCowGame::GetMaxTries(){

  return maxTries;
}
int FBullCowGame::GetHighScore(){
  return 0;
}
int FBullCowGame::GetCurrentTry(){
  return myTries;
}

bool FBullCowGame::checkGuessValidity(std::string guess){
  return false;
}
bool FBullCowGame::isWon(){
  return false;
}
