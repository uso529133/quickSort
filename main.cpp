#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <chrono>
#include "quicksort.cpp"

using namespace std;
int main() {
	ifstream input("input.csv");
	string line;
	vector<int> A;

	while (getline(input, line)) {
		A.push_back(stoi(line));
	}

	quickSort(A, 0, A.size() - 1);

	// for (auto x : A) {
	//     cout << x << endl;
	// }


	input.close();

	return 0;
}

