#include<iostream>
#include "./stack.h"
template<class T>
bool stack<T>::isEmpty(){
    return this->head==NULL;
}
template<class T>
void stack<T>::push(T data){

        Node <T> *node = new Node<T>(data,head);
        head=node;
        this->length++;
   
}

template<class T>
T stack<T>::pop(){
         T data;
         if(isEmpty()) return data;
        Node <T> *node = head;
        head=head->getNextNode();
        data = node->getData();
        delete node;
        this->length--;
        return data;
}
template<class T>
void stack<T>::print(){

      while(!isEmpty()) {

       std::cout<<pop()<<endl;
      }
}

//Nos permite obtener la longitud de la pila
template<class T>
int stack<T>::getLength(){
    return this->length;
}

// Funcion para ordenar la pila en orden ascendente utilizando dos pilas auxiliares
template<class T>
void stack<T>::stackAsc() {
    stack<T> tempStack;
    while (!isEmpty()) {
        T temp = pop();
        while (!tempStack.isEmpty() && tempStack.head->getData() > temp) {
            push(tempStack.pop());
        }
        tempStack.push(temp);
    }
    while (!tempStack.isEmpty()) {
        push(tempStack.pop());
    }
}

// Funcion para ordenar la pila en orden descendente utilizando dos pilas auxiliares
template<class T>
void stack<T>::stackDesc() {
    stack<T> tempStack1, tempStack2;
    while (!isEmpty()) {
        T temp = pop();
        while (!tempStack1.isEmpty() && tempStack1.head->getData() < temp) {
            tempStack2.push(tempStack1.pop());
        }
        tempStack1.push(temp);
        while (!tempStack2.isEmpty()) {
            tempStack1.push(tempStack2.pop());
        }
    }
    while (!tempStack1.isEmpty()) {
        push(tempStack1.pop());
    }
}