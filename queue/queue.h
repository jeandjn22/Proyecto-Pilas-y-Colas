#include "../queuenode/queuenode.cpp"
template<class Q>
class Queue{
    private:
        QueueNode<Q> *head=NULL;
        QueueNode<Q> *tail=NULL;
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
