//
//  DoublyLinkedList.cpp
//  DataStructures
//
//  Created by Cristofer Silva on 13/07/23.
//

#include <stdio.h>
#include "DoublyLinkedList.h"

DoublyNode::DoublyNode(int nodeValue){
    value = nodeValue;
}
int DoublyNode::getValue(){
    return value;
}
void DoublyNode::setValue(int newValue){
    value = newValue;
}
DoublyNode* DoublyNode::getNextDoublyNode(){
    return next;
}
DoublyNode* DoublyNode::getPreviousDoublyNode(){
    return previous;
}
void DoublyNode::setNextDoublyNode(DoublyNode* newNextDoublyNode){
    next = newNextDoublyNode;
}
void DoublyNode::setPreviousDoublyNode(DoublyNode* newPreviousNode){
    previous = newPreviousNode;
}
void DoublyLinkedList::setHeader(DoublyNode newHeader){
    head = &newHeader;
}
DoublyNode* DoublyLinkedList::getHeader(){
    return head;
}

int DoublyLinkedList::getLength(){
    int doublyLinkedListLength = 0;
    DoublyNode* currentNode = head;
    
    while (currentNode != nullptr) {
        doublyLinkedListLength++;
        currentNode = currentNode -> getNextDoublyNode();
    }
    
    return doublyLinkedListLength;
}

bool DoublyLinkedList::isEmpty(){
    bool isEmpty = getLength() == 0;
    return isEmpty;
}

std::list<int> DoublyLinkedList::toArray(){
    int lenght = getLength();
    std::list<int> nodeValues;
    DoublyNode* currentNode = head;
    for (int i = 0; i < lenght; i++) {
        nodeValues.push_back(currentNode -> getValue());
        currentNode = currentNode -> getNextDoublyNode();
    }
    return nodeValues;
}

std::string DoublyLinkedList::toString(){
    std::string listStringRepresentation = "{ ";
    int lenght = getLength();
    DoublyNode* currentNode = head;
    
    for (int i = 0; i < lenght; i++) {
        listStringRepresentation.append(std::to_string(currentNode -> getValue()));
        
        if (i == lenght - 1) {
            listStringRepresentation.append(" }");
        }else{
            listStringRepresentation.append(", ");
        }
       
        currentNode = currentNode -> getNextDoublyNode();
    }
    
    return listStringRepresentation;
}

void DoublyLinkedList::addNewNode(DoublyNode newNode){
    if (head == nullptr) {
        head = &newNode;
        tail = &newNode;
        return;
    }
    tail -> setNextDoublyNode(&newNode);
    newNode.setPreviousDoublyNode(tail);
    tail = &newNode;
}
