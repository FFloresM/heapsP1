#include "FibonacciHeap.h"
using namespace std;
FibonacciHeap::FibonacciHeap(){
	min_heap = NULL;
}
FibonacciHeap::~FibonacciHeap(){

}
void FibonacciHeap::insertar(int v){
	Nodo* n = new Nodo(v);
	//faltaba esto
	n->setSig(n);
	n->setPrev(n);
	//
	min_heap = _union(min_heap,n);
}
Nodo* FibonacciHeap::_union(Nodo* a, Nodo* b){
	if(a==NULL)return b;
	if(b==NULL)return a;
	/*
	lista circular doblemente enlazada
	*/
	Nodo* a_prev = a->getPrev();
	a_prev->setSig(b);
	b->setPrev(a_prev);
	b->setSig(a);
	a->setPrev(b);
	//cambio de puntero al minimo
	if(a->getValor() > b->getValor()){
		a=b;
		/*
		Nodo* aux=a;
		a=b;
		b=aux;
		*/
	}
	return a;
}
Nodo* FibonacciHeap::buscar(int b){
	_buscar(min_heap, b);
}
Nodo* FibonacciHeap::_buscar(Nodo* min_heap, int b){
	Nodo *n = min_heap;
	if(n==NULL)return NULL;
	do{
		if(n->getValor() == b) return n;
		Nodo *n2 = _buscar(n->getHijo(),b);
		if(n2)return n2;
		n = n->getSig();
	}while(n!=min_heap);
	return NULL;
}
int FibonacciHeap::getMin(){
	return min_heap->getValor();
}







/*
if(a==NULL)return b;
		if(b==NULL)return a;
		if(a->value>b->value) {
			node<V>* temp=a;
			a=b;
			b=temp;
		}
		node<V>* an=a->next;
		node<V>* bp=b->prev;
		a->next=b;
		b->prev=a;
		an->prev=bp;
		bp->next=an;
return a;
*/
/*
	if(a->getValor() > b->getValor()){
		Nodo* temp=a;
		a=b;
		b=temp;
	}
	Nodo* a_sig=a->getSig();
	Nodo* b_prev=b->getPrev();
	a->setSig(b);
	b->setPrev(a);
	a_sig->setPrev(b_prev);
	b_prev->setPrev(a_sig);
return a;
*/