#include<iostream>
#include "./queue.h"
template<class Q>
bool Queue<Q>::isEmpty(){
    return this->head==NULL;
}
template<class Q>
void Queue<Q>::push(Q data){
       
        QNode <Q> *node = new QNode<Q>(data,NULL);
         if(isEmpty()){
            head=node;
            tail=node;
            this->length++;
            return;
        }
        tail->setNextNode(node);
        tail=node;
        this->length++;
   
}

template<class Q>
Q Queue<Q>::pop(){
         Q data;
         if(isEmpty()) return data;
        QNode <Q> *node = head;
        head=head->getNextNode();
        data = node->getData();
        delete node;
        this->length--;
        return data;
}
template<class Q>
void Queue<Q>::print(){

      while(!isEmpty()) {

       std::cout<<pop()<<endl;
      }
}


template<class Q>
int Queue<Q>::getLength(){
    return this->length;
}

// Funcion para ordenar la cola en orden ascedente utilizando una cola auxiliar
template<class Q>
void Queue<Q>::queueAsc() {
    Queue<Q> tempQueue;
    while (!isEmpty()) {
        Q temp = pop();
        while (!tempQueue.isEmpty() && tempQueue.head->getData() > temp) {
            push(tempQueue.pop());
        }
        tempQueue.push(temp);
    }
    while (!tempQueue.isEmpty()) {
        push(tempQueue.pop());
    }
}

// Funcion para ordenar la cola en orden descedente utilizando una cola auxiliar

template<class Q>
void Queue<Q>::queueDesc() {
    Queue<Q> tempQueue;
    while (!isEmpty()) {
        Q temp = pop();
        while (!tempQueue.isEmpty() && tempQueue.head->getData() < temp) {
            push(tempQueue.pop());
        }
        tempQueue.push(temp);
    }
    while (!tempQueue.isEmpty()) {
        push(tempQueue.pop());
    }
}
