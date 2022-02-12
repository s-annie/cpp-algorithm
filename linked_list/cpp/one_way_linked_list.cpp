// one_way_linked_list.cpp - Implementation of the one way linked list
// Date: 2022-2-12
// Created by: Annie S.
#include <iostream>

#define METHOD 0

class IntSLLNode
{
    public:
        IntSLLNode()
        {  
            next = 0;
        }
        IntSLLNode(int i, IntSLLNode *in = 0)
        {
            info = i;
            next = in;
        }
        int info;
        IntSLLNode *next;
};

class IntSLList
{
    public:
        IntSLList() {
            head = tail = 0;
        };
        void addToHead(int);
        void addToTail(int);
        void deleteFromHead();  // delete the head and return its info
        void deleteFromTail();  // delete the tail and return its info
        bool isInList(int);

        IntSLLNode *head;
        IntSLLNode *tail;
};

void IntSLList::addToHead(int el)
{
    head = new IntSLLNode(el, head);
    if (tail == 0)
    {
        tail = head;
    }
}

void IntSLList::addToTail(int el)
{
    if (tail != 0)  // If list is not empty
    {
        tail->next = new IntSLLNode(el);
        tail = tail->next;
    }
    else head = tail = new IntSLLNode(el);
}

// To be implemented
void IntSLList::deleteFromHead() {};
void IntSLList::deleteFromTail() {};
bool IntSLList::isInList(int el) { return true; };


int main() {
    if (METHOD == 0)
    {
        IntSLList one_way_linked_list;
        for (int i = 0; i < 10; i++) {
            one_way_linked_list.addToTail(i);
        };

        IntSLLNode *p = one_way_linked_list.head;

        while(true) {
            // Printing out all the data in the one way linked list.
            std::cout << p->info << std::endl;
            if (p == one_way_linked_list.tail) { break; } else { p = p->next; }
        }
    }
    else if (METHOD == 1)
    {
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
}