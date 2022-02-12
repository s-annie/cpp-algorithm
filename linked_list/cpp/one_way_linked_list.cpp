// one_way_linked_list.cpp - Implementation of the one way linked list
// Date: 2022-2-12
// Created by: Annie S.
#include <iostream>

class IntSLLNode{
    public:
        IntSLLNode() {  
            next = 0;
        }
        IntSLLNode(int i, IntSLLNode *in = 0){
            info = i;
            next = in;
        }
        int info;
        IntSLLNode *next;

        // To be implemented
        void addToHead(int);
        void addToTails(int);
        void deleteFromHead();  // delete the head and return its info
        void deleteFromTail();  // delete the tail and return its info
        bool isInList(int);
};

int main() {
    IntSLLNode *first_ptr = new IntSLLNode(0);
    IntSLLNode *p = first_ptr;
    for (int i = 1; i < 10; i++) {
        p->next = new IntSLLNode(i);
        p = p->next;
    };

    p = first_ptr;
    while(true) {
        // Printing out all the data in the one way linked list.
        std::cout << p->info << std::endl;
        p = p->next;
        if (p == 0) { break; }
    }
}