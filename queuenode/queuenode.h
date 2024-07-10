template<class Q>
class QueueNode{
    private:
        Q data;
        QueueNode<Q> *next=NULL;
    public:
        QueueNode(Q,QueueNode<Q>*);
        ~QueueNode();
        QueueNode<Q>* getNextNode();
        void setData(Q);
        Q getData();
        void setNextNode(QueueNode<Q>*);
        void print();
};