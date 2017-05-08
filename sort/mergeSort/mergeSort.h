#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include<initializer_list>
#include<vector>
using namespace std;

class MergeSort
{
public:
	MergeSort()=default;
	MergeSort(initializer_list<int> li);
	void handle();
	void output()const;
	const int &length;
private:
	vector<int> vi;
	int len;
	void sort(int beg,int end);
	void do_merge(int beg,int mid,int end);
};

#endif
