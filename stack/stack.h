#include "../nodo/nodo.cpp"
template<class T>
class stack{
    private:
        Node<T> *head=NULL;
        int length=0;
    public:
        int getLength();
        void push(T);
        T pop();
        bool isEmpty();
        void print();
        void stackAsc();
        void stackDesc();
    

};