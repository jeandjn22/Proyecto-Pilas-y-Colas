#include "../queuenode/queuenode.cpp"
template<class Q>
class Queue{
    private:
        QNode<Q> *head=NULL;
        QNode<Q> *tail=NULL;
        int length=0;
    public:
        int getLength();
        void push(Q);
        Q pop();
        bool isEmpty();
        void print();
        void queueAsc();
        void queueDesc();
};
