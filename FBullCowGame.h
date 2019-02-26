#pragma once
#include <string>
using int32 = int;
using string = std::string;
struct BullCowCount {
  int32 Bulls = 0;
  int32 Cows = 0;
};

class FBullCowGame {

public:
  BollCowCount SubmitGuess(string s);
  FBullCowGame();
  int32 SetCurrentTry(int32 settry);
  int32 GetMaxTries() const;
  int32 GetHighScore() const;
  int32 GetCurrentTry() const;
  bool isWon() const;
  bool checkGuessValidity(std::string guess);
  void ResetGame();

private:
  //Initialitation in constructor
  int32 myTries;
  int32 maxTries;
  int32 HighScore = 0;
  string MyHiddenWord;
};
