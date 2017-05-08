#include "insertSort.h"
#include<iostream>
using namespace std;
int main()
{
	InsertSort se({2,7,4,6,5,2,3,3,9,4});
	cout<<"insert_sort before:"<<endl;
	se.output();
	cout<<"insert_sort after:"<<endl;
	se.sort();
	se.output();
	cout<<"insert_sort_recurse after:"<<endl;
	se.sortRec(se.length-1);
	se.output();
/*	const InsertSort cse({3,5,1,2,7,5});
	cse.output();
	cse.sort();//error!! const object
	cse.output();
*/
	return 0;

}
