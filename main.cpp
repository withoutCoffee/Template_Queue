#include <iostream>
#include "Fila.h"
#include <vector>
using namespace std;

int main(){
    Fila<int> fila(3);

    fila.push(40);
    cout<<fila.pop()<<endl;
    fila.push(10);
    fila.push(50);
    fila.push(90);
    cout<<fila.pop()<<endl;
    cout<<fila.pop()<<endl;
    cout<<fila.pop()<<endl;
    return 0;
}
