//============================================================================
// Name        : question3.cpp
// Author      : Shuchi
// Version     :
// Copyright   : Your copyright notice
// Description : thinking in C++, question3, chapter 2
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ifstream in("src/file1.txt");
	string s;
	int count = 0;

	while(in >> s)
	{
		count++;
	}

	cout << "count " << count;
	return 0;
}
