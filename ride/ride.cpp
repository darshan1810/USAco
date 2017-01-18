/*
ID: darshan11
LANG: C++11
TASK: ride
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ofstream fout ("ride.out");
	ifstream fin ("ride.in");
	long long int h1 = 1, h2 = 1;
	string A, B;
	fin >> A;
	fin >> B;
	for(char a : A)
		h1 *= a - 'A' + 1;
	for(char a : B)
		h2 *= a - 'A' + 1;
	// cout << h1 << ":" << h2 << endl;
	h1 %= 47;
	h2 %= 47;
	if(h1 == h2)
		fout << "GO" << endl;
	else
		fout << "STAY" << endl;	
	return 0;
}
