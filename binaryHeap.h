/* C++11 binaryHeap.h
 * Declaracion de la clase binaryHeap
 * Las funciones están definidas en binaryHeap.cpp
 */
#ifndef BINARYHEAP_H
#define BINARYHEAP_H

#include <vector>

class BinaryHeap
{
private:
	std::vector<int> heap;
	int parent(int k);
	std::vector<int> getHeap();

public:
	BinaryHeap();
	~BinaryHeap();
	void showHeap();
	int getMin();
	void insert(int k);
	bool search(int k);
	void join(BinaryHeap bh); //check this params
};

#endif