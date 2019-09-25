#include <bits/stdc++.h>
using namespace std;

struct node {
    
    int key;
    int grade;
    node *parent , *child , *next;
};

class BinomialHeap {
private:
node* head;
node* minimo;

node* CreateNode(int);
public: 
BinomialHeap();
~BinomialHeap();
void Crear_vacio();
void insert(int );
bool search();
int findMinimo();
void borrar_minimo();
void show();
void link_tree(node* , node*);
node* merge_tree(node* , node*);
node* union_tree(node* , node* );
};
