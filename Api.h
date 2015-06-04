#pragma once

#include "rapidjson/document.h"
using namespace rapidjson;

#include <HttpClient.h>
using Kangaroo::HttpClient;

#include <vector>
using std::vector;
#include <string>
using std::string;

#include "Score.h"

namespace Ponup {

class Api {

	public: static vector<Score> getScores( const string& );
};

}


