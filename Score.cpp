#include "Score.h"

using namespace Ponup;

void Score::setPlayerName( const string& playerName ) {
	this->playerName = playerName;
}

string Score::getPlayerName() const {
	return playerName;
}

void Score::setGameLevel( const string& gameLevel ) {
	this->gameLevel = gameLevel;
}

string Score::getGameLevel() const {
	return gameLevel;
}

void Score::setGameLevelNumber( int gameLevelNumber ) {
	this->gameLevelNumber = gameLevelNumber;
}

int Score::getGameLevelNumber() const {
	return gameLevelNumber;
}

void Score::setValue( int value ) {
	this->value = value;
}

int Score::getValue() const {
	return value;
}

