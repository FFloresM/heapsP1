#include "FibonacciHeap.h"
using namespace std;
int main(){
	FibonacciHeap* heap = new FibonacciHeap();
	heap->insertar(124);
	int aux=heap->getMin();

	cout<<aux<<endl;
	heap->insertar(1223);

	Nodo* aux_b = heap->buscar(1223);
	cout<<aux_b->getValor()<<endl;

	heap->insertar(12412);
	heap->insertar(13);
	aux=heap->getMin();
	cout<<aux<<endl;
	heap->insertar(1245);
	heap->insertar(1244);
	heap->insertar(1);
	aux=heap->getMin();
	cout<<aux<<endl;


	aux_b = heap->buscar(124);
	cout<<aux_b->getValor()<<endl;

	aux_b = heap->buscar(12);
	if(aux_b)cout<<aux_b->getValor()<<endl; //nomesclaturas
}