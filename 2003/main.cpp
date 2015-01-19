#include "2003.h"
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

void print(tree<string> tr);
int main(int, char **) {
	tree<string> tr;
	tree<string>::iterator top, employer;
	string line1, line2, line3;

	top = tr.begin();
	cin >> line1;
	tr.insert(top, line1);
	while (cin >> line1) {
		if (line1 == "print") {
			print(tr);
		} else if (line1 == "fire") {
			cin >> line2;
			tr.fire(find(tr.begin(), tr.end(), line2));
		} else if ((employer = find(tr.begin(), tr.end(), line1)) != NULL) {
			cin >> line2 >> line3;
			tr.append_child(employer, line3);
		} else {
			cout << "Error" << endl;
		}
	}
}
void print(tree<string> tr) {
	tree<string>::iterator sib = tr.begin(),end = tr.end();
	while (sib != end) {
		for (int i = 0; i < tr.depth(sib); ++i)
			cout << "+";
		cout << (*sib) << endl;
		++sib;
	}
	int count=60;
	while(count--)cout<<"-";
	cout<<endl;
}
