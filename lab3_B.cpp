#include<vector>
#include<algorithm>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include"Clock.h"
using namespace std;

void insertion_sort(vector<int> &v);

int main()
{
	// create a object to compute the time.
	Clock clk;
	// create a object that write a file.
	ofstream fileOut("B_record.out", ios::app);
	if(!fileOut)
	{
		cerr << "Failed Opening the B_record.out!!";
		exit(1);
	}
	int num;
	// get the num.
	cin >> num;
	// create and initialize the vectors.
	vector<int> v1(num), v2;
	srandom(time(NULL));
	for (int i = 0 ; i < num ; ++i)
		v1.at(i) = random();
	v2 = v1;
	// start timing.
	clk.start();
	// use the sort provided by algorithm header file.
	sort(v1.begin(), v1.end());
	fileOut << "sort(): " << clk.getElapsedTime() << " seconds" << endl;
	// start timing again.
	clk.start();
	// use the insertion sort.
	insertion_sort(v2);
	fileOut << "insertion_sort(): " << clk.getElapsedTime() << " seconds" << endl;
	return 0;
}

void insertion_sort(vector<int> &v)
{
        int insert, moveItem;
        for (int next = 1 ; next < v.size() ; ++next)
        {
                insert = v.at(next);
                moveItem = next;
                while( (moveItem > 0) && (v.at(moveItem - 1) > insert))
                {
                        v.at(moveItem) = v.at(moveItem - 1);
                        --moveItem;
                }
                v.at(moveItem) = insert;
        }
}

