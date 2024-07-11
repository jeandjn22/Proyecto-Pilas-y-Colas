#include<iostream>
#include "./queuenode.h"
using namespace std;

template <class Q>
QNode<Q>::QNode(Q data, QNode<Q>* next){
    this->data=data;
    if(next!=NULL){
        this->next=next;
    }
}
template <class Q>
QNode<Q>* QNode<Q>::getNextNode(){
    return this->next;
}

template <class Q>
void QNode<Q>::setNextNode(QNode<Q>* next){
     if(next!=NULL){
        this->next=next;
    }
}

template <class Q>
void QNode<Q>::setData(Q data){
    this->data=data;
}


template <class Q>
Q QNode<Q>::getData(){
   return this->data;
}



template<class Q>
void QNode<Q>::print(){
    cout<<this->data<<endl; 
}
template <class Q>
QNode<Q>::~QNode(){
    next=NULL;
}