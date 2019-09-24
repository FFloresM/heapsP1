#include "Nodo.h"

Nodo::Nodo(int v){
	prev = NULL;
	sig = NULL;
	hijo = NULL;
	padre = NULL;
	grado = 0;
	valor = v;
}

Nodo* Nodo::getPrev(){
	return prev;
}
Nodo* Nodo::getSig(){
	return sig;
}
Nodo* Nodo::getHijo(){
	return hijo;
}
Nodo* Nodo::getPadre(){
	return padre;
}
void Nodo::setPrev(Nodo *n){
	prev = n;
}
void Nodo::setSig(Nodo *n){
	sig = n;
}
void Nodo::setHijo(Nodo *n){
	hijo = n;
}
void Nodo::setPadre(Nodo *n){
	padre = n;
}
int Nodo::getValor(){
	return valor;
}
void Nodo::setValor(int v){
	valor = v;
}
int Nodo::getGrado(){
	return grado;
}
void Nodo::setGrado(int g){
	grado = g;
}

