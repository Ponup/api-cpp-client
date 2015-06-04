#include "Api.h"

namespace Ponup {

vector<Score> Api::getScores( const string& gameName ) {
	vector<Score> scores;
	string data;

	HttpClient request( "http://api.ponup.com/score/list?game_name=" + gameName );
	request.get( &data );

	Document document;
	document.Parse( data.c_str() );
	if( document.IsArray() ) {
		for( SizeType i = 0; i < document.Size(); i++ ) {
			Value &value = document[ i ];
			Score score;
			score.setPlayerName( value["player_name"].GetString() );
			score.setValue( value["value"].GetInt() );
			scores.push_back( score );
		}
	}

	return scores;
}

}

