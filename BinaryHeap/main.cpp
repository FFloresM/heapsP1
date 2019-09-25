#include "binaryHeap.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	BinaryHeap bh_1;
	vector<int> v = {8,5,3};

	for (int i = 0; i < v.size(); ++i)
		bh_1.insert(v[i]);
	
	bh_1.showHeap();
	
	BinaryHeap bh_2;
	bh_2.insert(6);
	bh_2.insert(4);
	bh_2.insert(2);

	bh_1.join(bh_2);
	bh_1.showHeap();

	return 0;
}