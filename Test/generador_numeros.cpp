#include <bits/stdc++.h>
using namespace std;
/*
Genera números enteros con una distribución estandar
La cantidad de números que genera es determinada por una entrada
El rango que genera es entre 1 y 10.000.000

la salida es primero la cantidad de elmentos y luegos estos
*/
#define MIN 1
#define MAX 10000000
int main(){
	int CANTIDAD=0;
	cin>>CANTIDAD;
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(MIN,MAX);
	cout<<CANTIDAD<<endl;
	for(int i=0; i<CANTIDAD ;i++){
		cout<< dist(gen)<< endl;
	}
}