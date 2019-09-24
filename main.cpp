#include "binaryHeap.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	BinaryHeap bh;
	vector<int> v = {4,10,3,1,2};

	for (int i = 0; i < v.size(); ++i){
		bh.insert(v[i]);
		bh.showHeap();
	}
	//cout << "min : " << bh.getMin() << endl;
	

	return 0;
}