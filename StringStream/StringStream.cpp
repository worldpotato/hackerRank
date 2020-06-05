#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	int input;
	char ch;
	vector<int> returnVector;
	stringstream ss(str);

	while(ss >> input) {
		returnVector.push_back(input);
		ss >> ch;
	}
	return returnVector;
}

int main() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	int vsize = integers.size();
	for(int i = 0; i < vsize; i++) {
		cout << integers[i] << "\n";
	}
	
	return 0;
}

