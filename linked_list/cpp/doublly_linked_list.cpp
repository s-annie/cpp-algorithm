#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST

template<class T>
class DLLNode {
    public:
        DLLNode() {
            next = prev = 0;
        }
        DLLNode(const T& el,DLLNode *n = 0, DLLNode *p = 0) {
            info = el;
            next = n;
            prev = p;
        }
        T info;
        DLLNode *n, *p;
};

template<class T>
class DoublyLinkedList {
    public:
        DLLNodeList() {
            head = tail = 0;
        }
    void addToDLLTail(const T&);
    T deleteFromDLLTail();

    protected:
        DLLNode<T> *head, *tail;
};

template<class T>
void DoublyLinkedList<T>::addToDLLTail(const T& el) {
    // to be implemented
}

template<class T>
T DoublyLinkedList<T>::deleteFromDLLTail() {
    // to be implemented
}
