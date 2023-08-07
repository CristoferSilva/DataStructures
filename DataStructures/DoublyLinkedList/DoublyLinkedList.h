//
//  DoublyLinkedList .h
//  DataStructures
//
//  Created by Cristofer Silva on 13/07/23.
//

#ifndef DOUBLY_LINKED_LIST_H_
#define DOUBLY_LINKED_LIST_H_

#include <list>
#include <string>

enum class OrderType{
    ASC,
    DESC
};

class DoublyNode {
public:
    DoublyNode(int value);
    ~DoublyNode() = default;
    int getValue();
    void setValue(int newValue);
    DoublyNode* getNextDoublyNode();
    DoublyNode* getPreviousDoublyNode();
    void setNextDoublyNode(DoublyNode* newNextDoublyNode);
    void setPreviousDoublyNode(DoublyNode* newPreviousNode);
    
private:
    int value_ = 0;
    DoublyNode* next_ = nullptr;
    DoublyNode* previous_ = nullptr;
};

class DoublyLinkedList {
public:
    DoublyLinkedList() = default;
    ~DoublyLinkedList() = default;
    bool isEmpty();
    int getLength();
    std::string toString();
    DoublyNode* getHeader();
    std::list<int> toArray();
    void addNewNode(DoublyNode *newHeader);
    void extracted(DoublyNode *&currentNode);
    DoublyNode* getSmallestNode();
    DoublyNode* getLargestNode();
    DoublyNode* getNodeByValue(int value);
    DoublyLinkedList* getOrderedList(OrderType orderType);
    
private:
    DoublyNode* head_ = nullptr;
    DoublyNode* tail_ = nullptr;
    void setHeader(DoublyNode newHeader);
};
#endif /* DOUBLY_LINKED_LIST_H_ */
