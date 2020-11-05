
template <typename T>
struct Node {
    public:
        T data;
        int posX;
        int posY;
        Node<T>* next;
        Node<T>* down;
};

template <class T>
class ListSparseMatrix : public SparseMatrix {
    private:
        vector<Node<T>*> X;
        vector<Node<T>*> Y;
        int columns;
        int rows;
};

