#ifndef NODO_H
#define NODO_H

#include <bits/stdc++.h>

class Nodo{

	public:
		Nodo(int v);
		Nodo* getPrev();
		Nodo* getSig();
		Nodo* getHijo();
		Nodo* getPadre();
		void setPrev(Nodo *n);
		void setSig(Nodo *n);
		void setHijo(Nodo *n);
		void setPadre(Nodo *n);
		int getValor();
		int getGrado();
		void setValor(int v);
		void setGrado(int g);
	private:
		Nodo* prev;
		Nodo* sig;
		Nodo* hijo;
		Nodo* padre;
		int valor;
		int grado;
};
#endif