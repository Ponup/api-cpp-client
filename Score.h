#pragma once

#include <string>
using std::string;

namespace Ponup {

class Score {

private:
	string playerName;
	string gameLevel;
	int gameLevelNumber;
	int value;

public:
	Score() : gameLevelNumber(0), value(0) {}

	void setPlayerName( const string& );
	string getPlayerName() const;

	void setGameLevel( const string& );
	string getGameLevel() const;

	void setGameLevelNumber( int );
	int getGameLevelNumber() const;

	void setValue( int );
	int getValue() const;
};

}

