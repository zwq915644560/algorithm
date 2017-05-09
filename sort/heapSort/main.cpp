#include "heapSort.h"
#include <iostream>
int main()
{
	//HeapSort se({4,7,3,5,1,9,7,4,5});
	HeapSort se={4,7,3,5,1,9,7,4,5};
	se.output();
	se.heapSort();
	se.output();
	return 0;
}