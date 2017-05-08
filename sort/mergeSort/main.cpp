#include"mergeSort.h"

int main()
{
	MergeSort se({2,4,8,3,5,1,4,7});
	se.output();
	//se.sort(0,se.length-1);
	//se.output();
	se.handle();
	se.output();
	return 0;
}
