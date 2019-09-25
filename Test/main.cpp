#include "../BinomialHeap/BinomialHeap.h"
#include "../FibonacciHeap/FibonacciHeap.h"
#include "../BinaryHeap/BinaryHeap.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
	BinaryHeap bh;
	BinomialHeap BH;
	FibonacciHeap FH;

	char *filemane = "nombre archivo";
	fstream file;
	file.open(filemane, ifstream::in);

	int v = file.get();

	//repetir para cada una... y medir tiempos
	while(file.good()){
		bh.insert(v);
		v = file.get();
	}





	return 0;
}