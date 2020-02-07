#include <iostream>
#include "Fila.h"
using namespace std;

/**Construtor da classe
template<class T>
Fila<T>::Fila(int size){
    this->size = size;
    this->cont = 0;
    this->ini = 0;
    this->fim = 0;
    this->elements = new T[size];
}
**/

/**Destrutor da classe
template<class T>
Fila<T>::~Fila(){
    delete elements;
}
**/

/**Função push da fila circular
template<class T>
void Fila<T>::push(T element){
    this->elements[this->fim]=element;
    ++this->cont;
    this->fim = (this->fim+1)%this->size;/**Função para fazer fila circular**/
/**}
**/



