#include "heapSort.h"
#include <iostream>
using namespace std;

//#define parent(x) ((x-1)/2)
//#define lchild(x) ((x*2)+1)
//#define rchild(x) ((x*2)+2)

HeapSort::HeapSort(initializer_list<int> li):heapSize(li.size())
{
	for(auto e:li)
		vi.push_back(e);
}
void HeapSort::heapSort()
{
	int temp;
	buildMaxHeap();
	for(size i=heapSize-1;i>=1;--i)
	{
		temp=vi[i];
		vi[i]=vi[0];
		vi[0]=temp;
		--heapSize;
		keepMaxHeap(0);
	}

}
void HeapSort::output()
{
	for(auto e:vi)
		cout<<e<<" ";
	cout<<endl;
}
//
void HeapSort::buildMaxHeap()
{
	if(heapSize==1)
		return;
	//size i;//for(size i=parent(heapSize-1);i>=0;--i)
	for(int i=parent(heapSize-1);i>=0;--i)
	{
		keepMaxHeap(i);
	}
}
//
void HeapSort::keepMaxHeap(size i)
{
	size l=lchild(i);
	size r=rchild(i);
	size max=i;//record the max index among i and its children
	if((l<=heapSize-1)&&(vi[i]<vi[l]))
		max=l;
	if((r<=heapSize-1)&&(vi[max]<vi[r]))
		max=r;
	if(max!=i)
	{
		int temp;
		temp=vi[i];
		vi[i]=vi[max];
		vi[max]=temp;
		keepMaxHeap(max);
	}
}
HeapSort::size HeapSort::parent(size i)
{
	return (i-1)/2;
}
HeapSort::size HeapSort::lchild(size i)
{
	return i*2+1;
}
HeapSort::size HeapSort::rchild(size i)
{
	return i*2+2;
}