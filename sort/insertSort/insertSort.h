#ifndef INSERT_SORT_H
#define INSERT_SORT_H

#include<initializer_list>
#include<vector>
using namespace std;

class InsertSort
{
public:
	InsertSort()=default;
	InsertSort(initializer_list<int> li);
	void sort();
	void sortRec(int end);
	void output()const;//so const obj can also call it 
	const int &length;
private:
	vector<int> vi;	
	int len;
	void do_insert(int end);//insert vi[end] into sorted vi[0..end-1]	
};

#endif
