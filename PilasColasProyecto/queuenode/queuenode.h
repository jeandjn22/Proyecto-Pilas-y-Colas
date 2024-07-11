template<class Q>
class QNode{
    private:
        Q data;
        QNode<Q> *next=NULL;
    public:
        QNode(Q,QNode<Q>*);
        ~QNode();
        QNode<Q>* getNextNode();
        void setData(Q);
        Q getData();
        void setNextNode(QNode<Q>*);
        void print();
};