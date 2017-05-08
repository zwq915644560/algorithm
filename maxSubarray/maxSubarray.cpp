#include "maxSubarray.h"
#include <iostream>

MaxSubarray::MaxSubarray(initializer_list<int> li):len(li.size()),length(len)
{
	for(auto e:li)
	{
		vi.push_back(e);
	}
}
void MaxSubarray::handle()
{
	maxSubarray(0,len-1);
}
void MaxSubarray::handle(int b,int e)
{
	maxSubarray(b,e);
}
Result MaxSubarray::maxSubarray(int p,int r)
{
	if(p==r)
	{
		r0.maxSum=vi[p];
		r0.begin=r0.end=p;
		return r0;
	}
	else
	{
		Result r1,r2,r3;
		int q=(p+r)/2;
		r1=maxSubarray(p,q);
		r2=maxSubarray(q+1,r);
		r3=maxSubarrayCrossEnter(p,q,r);
		if(r1.maxSum>=r2.maxSum&&r1.maxSum>=r3.maxSum)
		{
			r0=r1;
		}
		else if(r2.maxSum>=r1.maxSum&&r2.maxSum>=r3.maxSum)
		{
			r0=r2;
		}
		else 
		{
			r0=r3;
		}
		return r0;
	}
}

Result MaxSubarray::maxSubarrayCrossEnter(int p,int q,int r)
{
	Result r1,r2;
	r1.maxSum=vi[q];
	r1.begin=r1.end=q;
	r2.maxSum=vi[q+1];
	r2.begin=r2.end=q+1;

	int k1=vi[q],k2=vi[q+1];
	for(int i=q-1;i>=p;--i)
	{
		k1+=vi[i];
		if(r1.maxSum<k1)
		{
			r1.maxSum=k1;
			r1.begin=i;
		}
	}	
	for(int i=q+2;i<=r;++i)
	{
		k2+=vi[i];
		if(r2.maxSum<k2)
		{
			r2.maxSum=k2;
			r2.end=i;
		}
	}
	r0.maxSum=r1.maxSum+r2.maxSum;
	r0.begin=r1.begin;
	r0.end=r2.end;
	return r0;	
}
void MaxSubarray::output()const
{
	cout<<r0.maxSum<<" "<<r0.begin<<" "<<r0.end<<endl;
}