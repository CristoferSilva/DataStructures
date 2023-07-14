//
//  DoublyLinkedList .h
//  DataStructures
//
//  Created by Cristofer Silva on 13/07/23.
//

#include <list>
#include <string>
#ifndef DoublyLinkedList__h
#define DoublyLinkedList__h

struct DoublyNode {
    
    private:
        int value = 0;
        DoublyNode* next = nullptr;
        DoublyNode* previous = nullptr;
       
    public:
        int getValue();
        DoublyNode(int value);
        void setValue(int newValue);
        DoublyNode* getNextDoublyNode();
        DoublyNode* getPreviousDoublyNode();
        void setNextDoublyNode(DoublyNode* newNextDoublyNode);
        void setPreviousDoublyNode(DoublyNode* newPreviousNode);
};

struct DoublyLinkedList {
    
    private:
        DoublyNode* head = nullptr;
        DoublyNode* tail = nullptr;
        void setHeader(DoublyNode newHeader);
    
    public:
        bool isEmpty();
        int getLength();
        std::string toString();
        DoublyNode* getHeader();
        std::list<int> toArray();
        void addNewNode(DoublyNode newHeader);
};


#endif /* DoublyLinkedList__h */
