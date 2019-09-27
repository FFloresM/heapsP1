#include "../BinomialHeap/BinomialHeap.h"
#include "../FibonacciHeap/FibonacciHeap.h"
#include "../BinaryHeap/binaryHeap.h"
#include <iostream>
#include <vector>

#define MIN 1
#define MAX 10000000

using namespace std;



vector<int> rdm(int CANTIDAD){
	vector<int> v;
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(MIN,MAX);
	for(int i=0; i<CANTIDAD ;i++)
		v.push_back(dist(gen));

	return v;
}

int main(int argc, char const *argv[])
{
	BinaryHeap bh;
	BinomialHeap BH;
	FibonacciHeap FH;

	
	for(int k=100; k<100000000; k*=10){

		vector<int> data = rdm(k);

		//binaryheap
		auto start_bi = chrono::steady_clock::now();

		for(int i=0; i<data.size();i++)
			bh.insert(data[i]);
		
		auto end_bi = chrono::steady_clock::now();
	
		//binomialheap
		auto start_Bi = chrono::steady_clock::now();

		for(int i=0; i<data.size();i++)
			BH.insert(data[i]);
		
		auto end_Bi = chrono::steady_clock::now();
	
		//fibonacciheap
		auto start_Fi = chrono::steady_clock::now();

		for(int i=0; i<data.size();i++)
			FH.insertar(data[i]);
		
		auto end_Fi = chrono::steady_clock::now();
	

		cout << k << " " 
		<< chrono::duration_cast<chrono::microseconds>(end_bi - start_bi).count()
		<< " "
		<< chrono::duration_cast<chrono::microseconds>(end_Bi - start_Bi).count()
		<< " "
		<< chrono::duration_cast<chrono::microseconds>(end_Fi - start_Fi).count()
		<< endl;

	}


	return 0;
}
