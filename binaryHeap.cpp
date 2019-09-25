//
//
#include <iostream>
#include <cmath>
#include "binaryHeap.h"

using namespace std;

//contructor
BinaryHeap::BinaryHeap(){
	//v at 0 is not used
	heap.push_back((int)NULL);
}

int BinaryHeap::parent(int k){
	return int(ceil((k-1)/2.0));
}

void BinaryHeap::insert(int k){
	heap.push_back(k);
	int v = heap.size()-1;
	while(heap[v] != heap[1]){
		int u = parent(v);
		if(heap[v] > heap[u]) break;
		swap(heap[v], heap[u]);
		v = u;
	}
}

void BinaryHeap::showHeap(){
	for (int i = 1; i < heap.size(); ++i){
		cout << heap[i] << " ";
	}
	cout << endl;
}

int BinaryHeap::getMin(){
	return heap[1];
}
//lineal
bool BinaryHeap::search(int k){
	for (int i = 1; i < heap.size(); ++i)
		if(k == heap[i])
			return true;
	return false;
	
}

//recibe un binaryheap y lo une al del objeto que lo llama.
void BinaryHeap::join(BinaryHeap bh){
	vector<int> tmp = bh.getHeap();
	for (int i = 1; i < tmp.size() ; ++i)
		insert(tmp[i]);
}

vector<int> BinaryHeap::getHeap(){
	return heap;
}

BinaryHeap::~BinaryHeap(){
	heap.clear();
	heap.shrink_to_fit();
}