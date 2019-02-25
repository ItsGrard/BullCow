#pragma once
#include <string>
class FBullCowGame {

public:
  FBullCowGame();
  int SetCurrentTry(int settry);
  int GetMaxTries() const;
  int GetHighScore() const;
  int GetCurrentTry() const;
  bool isWon() const;
  bool checkGuessValidity(std::string guess);
  void ResetGame();

private:
  //Initialitation in constructor
  int myTries;
  int maxTries;
  int HighScore = 0;
};
