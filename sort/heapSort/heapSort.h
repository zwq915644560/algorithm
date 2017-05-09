#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <initializer_list>
#include <vector>
using namespace std;

class HeapSort
{
public:
	//typedef vector<int>::size_type size;
	using size=vector<int>::size_type;
	HeapSort()=default;
	HeapSort(initializer_list<int> li);
	void heapSort();
	void output();

private:
	vector<int> vi;
	size heapSize;
	void buildMaxHeap();
	void keepMaxHeap(size i);
	inline size parent(size i);
	inline size lchild(size i);
	inline size rchild(size i);
	
};

#endif
