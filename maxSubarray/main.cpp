#include "maxSubarray.h"
using namespace std;
int main(int argc, char const *argv[])
{
	MaxSubarray se({2,-1,-3,2,-7,4,-3,4,-4,7});
	se.handle();
	se.output();
	se.handle(2,6);
	se.output();
	return 0;
}