#include <iostream>
#include <list>

using namespace std;

void print(list <int> lista) {
    for ( int i:lista ) {
        cout << i << endl;
    }
    cout << endl;
}

int main() {
    list <int> lista = {1, 5, 4, 7, 2, 8, 5, 35, 5, 7};
    list <int>::iterator it = lista.begin();

    for ( it = lista.begin(); it != lista.end(); ++it) {
        if ( *it == 2 ) {
            *it = 5;
        }
    }

    /*
    int x;
    for (int i = 0; i < 3; i++) {
        cout << "\nInserire un numero:\t";
        cin >> x;
        lista.push_back(x);
    }
    
    lista.sort(); */

    print(lista);
    
    return 0;
}