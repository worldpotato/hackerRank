#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int arraySize;
	cin >> arraySize;

	int array[arraySize];

	for(int i = 0; i < arraySize; i++){
		cin >> array[i];
	}

	for(int i = arraySize-1; i >= 0; i--){
		cout << array[i] << " ";
	}
	return 0;
}

