#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

vector<int> p;

int main() {
	string S;
	int n;

	getline(fin, S);
	n = S.length();

	p.resize(n);
	p[0] = 0;
	fout << p[0];
	for (int i = 1; i < n; ++i) {
		int j = p[i - 1];
		while (j > 0 && S[i] != S[j]) {
			j = p[j - 1];
		}
		if (S[i] == S[j]) {
			++j;
		}
		p[i] = j;
		fout << " " << j;
	}
	fout << "\n";

	return 0;
}