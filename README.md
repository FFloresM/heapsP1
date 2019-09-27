# Heaps
C++ implementation of
* BinaryHeap
* BinomialHeap
* FibonacciHeap

Ir al directorio Test y ejecutar:

Compiling
```console
g++ -c ../BinaryHeap/binaryHeap.cpp ../BinomialHeap/BinomialHeap.cpp ../FibonacciHeap/FibonacciHeap.cpp ../FibonacciHeap/Nodo.cpp *.cpp -std=c++11
```
Linking
```console
g++ *.o -o main_t.out
```
Executing
```console
./main_t.out
```
para las pruebas de tiempo.

Ir al directorio Testmem y ejecutar:

```console
g++ -c ../BinaryHeap/binaryHeap.cpp ../BinomialHeap/BinomialHeap.cpp ../FibonacciHeap/FibonacciHeap.cpp ../FibonacciHeap/Nodo.cpp *.cpp -std=c++11
g++ *.o -o main_m.out
```
* para test de binaryheap:
```console
./main_m.out bina
```
* para test de binomialheap:
```console
./main_m.out bino
```
* para test de fibonacciheap:
```console
./main_m.out fibo
```