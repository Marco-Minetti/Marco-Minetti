#include <iostream>
#include <fstream>

using namespace std;

struct nodo {
    int memoria;
    nodo *next;
};

typedef nodo *pnodo;

void stampa (pnodo p) {
    while(p!=NULL) {
        cout<<p->memoria<<" - ";
        p=p->next;
    }
    cout<<"NULL"<<endl;
};

int main () {
    pnodo p0, p1, p2, p3, p4, q;

    p0 = new nodo;
    p1 = new nodo;
    p2 = new nodo;
    p3 = new nodo;
    p4 = new nodo;

    p0->memoria = 1;
    p0->next = p1;
    p1->memoria = 2;
    p1->next = NULL;

    p2 -> next = p1;
    p0 ->next = p2;
    p2 -> memoria = 3;

    p3 = p2;
    p3->memoria = 0;
    p0->next = p3;

    int i = 0;

    for ( q = p0; q->memoria != 2; q = q->next ) {
        i++;
    }

    p4->next = q->next;
    p4->memoria = 4;
    q->next = p4;

    while ( i == 0 ) {
        p0 = p0->next;
        i--;
    }

    p0->next = p4;

    /*q = p0;
    while ( q->memoria != 2) {
        q = q->next;
    } */


    stampa(p0);
}