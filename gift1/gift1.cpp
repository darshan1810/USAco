/*
ID: darshan11
LANG: C++11
TASK: gift1
*/

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
	ofstream fout ("gift1.out");
	ifstream fin ("gift1.in");
	int n, sent, val;
	string curr, from;
	vector<string> people;
	fin >> n;
	// cout << n << endl;
	unordered_map<string, int> mp;
	for(int i = 0; i < n; i++) {
		fin >> curr;
		mp[curr] = 0;
		people.push_back(curr);
		// cout << curr << endl;
	}
	while(fin >> from) {
		fin >> val >> sent;
		// cout << from << ":" << val << " :: " << sent << endl;
		if(sent)
			val /= sent;
		mp[from] -= val * sent;
		for(int j = 0; j < sent; j++) {
			fin >> curr;
			mp[curr] += val;
		}
	}
	for(string& p : people)
		fout << p << " " << mp[p] << endl;
	return 0;
}
