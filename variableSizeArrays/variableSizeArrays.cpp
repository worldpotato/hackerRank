#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int numberOfVariableArrays;
	int numberOfQueries;

	cin >> numberOfVariableArrays >> numberOfQueries;
	vector<vector<int>> mainArray(numberOfVariableArrays);

	for (int indexOfVariableArray = 0; indexOfVariableArray < numberOfVariableArrays; indexOfVariableArray++){
		int numberOfEntries;
		cin >> numberOfEntries;

		mainArray[indexOfVariableArray].resize(numberOfEntries);

		for(int innerIndex = 0; innerIndex < numberOfEntries; innerIndex++){
			cin >> mainArray[indexOfVariableArray][innerIndex];

		}
	}

	for (int indexOfQuerry = 0; indexOfQuerry < numberOfQueries; indexOfQuerry++) {
		int x, y;
		cin >> x >> y;
		cout << mainArray[x][y] << endl;
	}

	return 0;
}
