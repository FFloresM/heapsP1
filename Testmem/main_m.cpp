#include "../BinaryHeap/binaryHeap.h"
#include "../BinomialHeap/BinomialHeap.h"
#include "../FibonacciHeap/FibonacciHeap.h"
#include "memcount.hpp"
#include <iostream>
#include <random>
#include <cstring>

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

	for(int k=100; k<=MAX; k*=10){

		vector<int> data = rdm(k);

		//binaryheap
		if(strcmp(argv[1],"bina") == 0) {
			BinaryHeap bh;
			for(int i=0; i<data.size();i++)
				bh.insert(data[i]);
		}
		else if(strcmp(argv[1],"bino") == 0){
			BinomialHeap* BH = new BinomialHeap();
			for(int i=0; i<data.size();i++)
				BH -> insert(data[i]);
		}
		else if(strcmp(argv[1],"fibo") == 0){
			FibonacciHeap* FH = new FibonacciHeap();
			for(int i=0; i<data.size();i++)https://www.geeksforgeeks.org/comparing-two-strings-cpp/
				FH -> insertar(data[i]);
		}
		else return 0;
		
		
		cout << k <<" "<< mem_total() << endl;
	}

	


	return 0;
}