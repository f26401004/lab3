#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
#include"Clock.h"

int main()
{
	int num, space;
	vector<int> data;
	// create a file object to read the file.in.
	ifstream fileIn("file.in", ios::in);
	if (!fileIn)
	{
		cerr << "Failed Opening the file.in!!";
		exit(1);
	}
	// get the data number.
	fileIn >> num;
	// read and record the data.
	while (fileIn >> space)
		data.push_back(space);
	// compute top five sum;
	sort(data.begin(), data.end());
	space = 0;
	for (int i = 1 ; i < 6 ; i++)
		space += data.at(num - i);
	cout << space << endl;
	return 0;
}
/*
int compute_top_five_sum(vector<int> &a)
{
	
}
*/

