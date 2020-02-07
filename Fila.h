#ifndef FILA_H
#define FILA_H
#include <iostream>
#include <stdio.h>

using namespace std;

template <class T>
class Fila{
    private:
        int size;
        int cont;
        int ini, fim;
        T *elements;
    public:
        /**Construtor da Fila**/
        Fila(int size){
            this->size = size;
            this->cont = 0;/**Contador de elementos preenchidos**/
            this->ini = 0;
            this->fim = 0;
            this->elements = new T[size];
        }
        /**Destrutor da fila**/
        ~Fila(){
            delete [] elements;
        }
        /**Função push da Fila Circular**/
        void push(T element){
            if(this->cont < this->size){
                this->elements[this->fim] = element;
                ++this->cont;/**Contador de elementos preenchidos**/
                this->fim = (this->fim+1)%this->size;/**Função para fazer fila circular**/
            }else{cout<<"Fila Cheia!"<<endl;}
        }
        /**Função pop da Fila Circular**/
        T pop(){
            if(this->cont > 0){
                --this->cont;/**Contador de elementos preenchidos**/
                int aux = this->ini;
                this->ini = (this->ini+1)%this->size;/**Função para fazer fila circular**/
                return(this->elements[aux]);
            }else{
                cout<<"Pilha Vazia!"<<endl;
                return -1;
            }

        }
};

#endif
