#include "FibonacciHeap.h"
using namespace std;
int main(){
	FibonacciHeap* heap = new FibonacciHeap();
	FibonacciHeap* heap2 = new FibonacciHeap();
	heap->insertar(124);
	int aux=heap->getMin();

	//cout<<aux<<endl;
	heap->insertar(1223);

	heap2->insertar(12);
	heap2->insertar(3333);
	heap2->insertar(0);

	Nodo* aux_b = heap->buscar(1223);
	//cout<<aux_b->getValor()<<endl;

	heap->insertar(12412);
	heap->insertar(13);
	aux=heap->getMin();
	//cout<<aux<<endl;
	heap->insertar(1245);
	heap->insertar(1244);
	heap->insertar(1);
	aux=heap->getMin();
	//cout<<aux<<endl;


	aux_b = heap->buscar(124);
	//cout<<aux_b->getValor()<<endl;
	heap->join(heap2);
	aux_b = heap->buscar(0);
	if(aux_b)cout<<aux_b->getValor()<<endl; //nomesclaturas
}