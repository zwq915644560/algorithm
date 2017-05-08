#include"mergeSort.h"
#include<iostream>
MergeSort::MergeSort(initializer_list<int> li):len(li.size()),length(len)
{
	for(auto e:li)
	{
		vi.push_back(e);
	}
}
void MergeSort::handle()
{
	sort(0,len-1);
}
void MergeSort::sort(int beg,int end)
{
	if(beg<end)
	{
		int mid=(beg+end)/2;
		sort(beg,mid);
		sort(mid+1,end);
		do_merge(beg,mid,end);
	}
	
}
void MergeSort::do_merge(int beg,int mid,int end)
{
	const int n1=mid-beg+1,n2=end-mid;
	int a1[n1],a2[n2];
	int i,j,k;
	for(i=0;i<n1;++i)
		a1[i]=vi[beg+i];
	for(i=0;i<n2;++i)
		a2[i]=vi[mid+1+i];
	for(i=0,j=0,k=beg;i<n1&&j<n2;++k)
	{
		if(a1[i]<a2[j])
		{
			vi[k]=a1[i];
			++i;
		}
		else
		{
			vi[k]=a2[j];
			++j;
		}
	}
	while(i<n1)
	{
		vi[k]=a1[i];
		++i;
		++k;
	}
	while(j<n2)
	{
		vi[k]=a2[j];
		++j;
		++k;
	}
}
void MergeSort::output()const
{
	for(auto e:vi)
		cout<<e<<" ";
	cout<<endl;
}
