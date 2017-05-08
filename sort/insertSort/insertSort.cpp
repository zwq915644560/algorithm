#include "insertSort.h"
#include<iostream>
using namespace std;

InsertSort::InsertSort(initializer_list<int> li):len(li.size()),length(len)
{
	for(auto e: li)
	{
		vi.push_back(e);
	}
}

void InsertSort::sort()
{
	for(int i=1;i<len;++i)
	{
		do_insert(i);
	}
}
void InsertSort::sortRec(int end)
{
	//int n=vi.size();
	if(end!=0)
		sortRec(end-1);
	do_insert(end);

}
void InsertSort::do_insert(int end)
{
	if(end==0)
		return;
	int k=vi[end],i;
	for(i=end-1;i>=0;--i)
	{
		if(k<vi[i])
		{
			vi[i+1]=vi[i];
		}
		else 
			break;
	}

	vi[i+1]=k;
}
void InsertSort::output()const
{
	for(auto e:vi)
		cout<<e<<" ";
	cout<<endl;
}
