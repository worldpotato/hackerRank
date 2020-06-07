#include <cmath>
#include <sstream>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {

	int numberOfLines, numberOfQuerries;
	string line; // the current line which is handled
	map<string, string> database;

	cin >> numberOfLines >> numberOfQuerries;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // read everything until line end
	string tagPrefix = ""; // the prefix is concatenated of the upper level tags

	for (int indexOfLines = 0; indexOfLines < numberOfLines; indexOfLines++){

		getline(cin, line);
		stringstream ss(line);

		string word;
		string tag;
		string attribute;

		while(getline(ss, word, ' ')){
			if(word[0] == '<'){ // this is a tag
				if(word[1] == '/'){ // this is a closing tag
					tag = word.substr(2, word.length()-3);
					size_t positionOfTag = tagPrefix.find("."+tag);
					positionOfTag > tagPrefix.length()
						? tagPrefix = ""
						: tagPrefix = tagPrefix.substr(0,positionOfTag);
				// remove one tag of
				} else { // this is a opening tag
					tag = word.back() == '>'
						? word.substr(1, word.length() - 2)
						: word.substr(1);
					tagPrefix.length() > 0
						? tagPrefix.append(".").append(tag)
						: tagPrefix = tag;
				}
			} else { // this is some part of an attribute
				if(word[0] == '\"') { // this is a value
					size_t positionOfLastQuotes = word.find_last_of('"');
					string value = word.substr(1, positionOfLastQuotes - 1);
					string dbKey = tagPrefix + "~" + attribute;
					database[dbKey] = value;
				} else if(word[0] != '=') { // this is an attribute
					attribute = word;
				} // do nothing on "="
			}
		}
	}
	
	for (int indexOfQuerries = 0; indexOfQuerries < numberOfQuerries; indexOfQuerries++) {
		string querryKey;
		cin >> querryKey;

		map<string, string>::iterator value = database.find(querryKey);
		value == database.end()
			? cout << "Not Found!" << endl
			: cout << value->second << endl;
	}
	


	return 0;
}

