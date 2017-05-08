#ifndef MAX_SUBARRAY_H
#define MAX_SUBARRAY_H

#include<initializer_list>
#include<vector>
using namespace std;

struct Result
{
	int maxSum;
	int begin,end;
};

class MaxSubarray
{
public:
	MaxSubarray()=default;
	MaxSubarray(initializer_list<int> li);
	void handle();
	void handle(int b,int e);
	void output()const;
	const int &length;
private:
	vector<int> vi;
	int len;
	Result r0;//record the maximum and location of the subarray
	Result maxSubarray(int p,int r);
	Result maxSubarrayCrossEnter(int p,int q,int r);
};

#endif
