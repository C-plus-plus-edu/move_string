#include <iostream>
#include <vector>
#include <string>
using namespace std;

void MoveStrings(vector<string>& a, vector<string>& b) {
	for (auto x : a) {
		b.push_back(x);
	}
	a.clear();
}

int main() {
	vector<string> source = {"a", "b", "c"};
	vector<string> destination = {"z"};
	MoveStrings(source, destination);
	for (auto x : source) {
		cout << x << " ";
	}
	cout << endl << "End source" << endl;
	for (auto x : destination) {
		cout << x << " ";
	}
	cout << endl << "End destination" << endl;
	return 0;
}
