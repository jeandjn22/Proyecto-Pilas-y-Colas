#include<iostream>
#include "./queuenode.h"
using namespace std;

template <class Q>
QueueNode<Q>::QueueNode(Q data, QueueNode<Q>* next){
    this->data=data;
    if(next!=NULL){
        this->next=next;
    }
}
template <class Q>
QueueNode<Q>* QueueNode<Q>::getNextNode(){
    return this->next;
}

template <class Q>
void QueueNode<Q>::setNextNode(QueueNode<Q>* next){
     if(next!=NULL){
        this->next=next;
    }
}

template <class Q>
void QueueNode<Q>::setData(Q data){
    this->data=data;
}


template <class Q>
Q QueueNode<Q>::getData(){
   return this->data;
}



template<class Q>
void QueueNode<Q>::print(){
    cout<<this->data<<endl; //solo para datos simples
}
template <class Q>
QueueNode<Q>::~QueueNode(){
    next=NULL;
}