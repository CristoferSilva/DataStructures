//
//  DoublyLinkedList.cpp
//  DataStructures
//
//  Created by Cristofer Silva on 13/07/23.
//

#include <stdio.h>
#include "DoublyLinkedList.h"

DoublyNode::DoublyNode(int nodeValue){
    value_ = nodeValue;
}

int DoublyNode::getValue(){
    return value_;
}

void DoublyNode::setValue(int newValue){
    value_ = newValue;
}

DoublyNode* DoublyNode::getNextDoublyNode(){
    return next_;
}

DoublyNode* DoublyNode::getPreviousDoublyNode(){
    return previous_;
}

void DoublyNode::setNextDoublyNode(DoublyNode* newNextDoublyNode){
    next_ = newNextDoublyNode;
}

void DoublyNode::setPreviousDoublyNode(DoublyNode* newPreviousNode){
    previous_ = newPreviousNode;
}

void DoublyLinkedList::setHeader(DoublyNode newHeader){
    head_ = &newHeader;
}

DoublyNode* DoublyLinkedList::getHeader(){
    return head_;
}

int DoublyLinkedList::getLength(){
    int doublyLinkedListLength = 0;
    DoublyNode* currentNode = head_;
    
    while (currentNode != nullptr) {
        doublyLinkedListLength++;
        currentNode = currentNode->getNextDoublyNode();
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
    DoublyNode* currentNode = head_;

  
    for (int i = 0; i < lenght; i++) {
        nodeValues.push_back(currentNode->getValue());
        currentNode = currentNode->getNextDoublyNode();
    }
    return nodeValues;
}

std::string DoublyLinkedList::toString(){
    std::string listStringRepresentation = "{ ";
    int lenght = getLength();
    DoublyNode* currentNode = head_;
    
    for (int i = 0; i < lenght; i++) {
        listStringRepresentation.append(std::to_string(currentNode->getValue()));
        
        if (i == lenght - 1) {
            listStringRepresentation.append(" }");
        }else{
            listStringRepresentation.append(", ");
        }
       
        currentNode = currentNode -> getNextDoublyNode();
    }
    
    return listStringRepresentation;
}

void DoublyLinkedList::addNewNode(DoublyNode* newNode){
    if (head_ == nullptr) {
        head_ = newNode;
        tail_ = newNode;
        return;
    }
    tail_ -> setNextDoublyNode(newNode);
    newNode -> setPreviousDoublyNode(tail_);
    tail_ = newNode;
}

DoublyNode* DoublyLinkedList::getSmallestNode(){
    int currentNodeValue;
    DoublyNode* currentNode = head_;
    int linkedLislength = getLength();
    DoublyNode* lastSmallestNode = head_;
    int minValue =  currentNode -> getValue();
    
    for (int counter = 1; counter < linkedLislength; counter++) {
        currentNode = currentNode->getNextDoublyNode();
        currentNodeValue = currentNode->getValue();
        
        if(currentNodeValue < minValue){
            minValue = currentNodeValue;
            lastSmallestNode = currentNode;
        }
    }
    return lastSmallestNode;
    
}

DoublyNode* DoublyLinkedList::getLargestNode(){
    int currentNodeValue;
    DoublyNode* currentNode = head_;
    int linkedLislength = getLength();
    DoublyNode* lastLargestNode = head_;
    int maxValue =  currentNode -> getValue();
    
    for (int counter = 1; counter < linkedLislength; counter++) {
        currentNode = currentNode->getNextDoublyNode();
        currentNodeValue = currentNode->getValue();
        
        if(currentNodeValue > maxValue){
            maxValue = currentNodeValue;
            lastLargestNode = currentNode;
        }
    }
    return lastLargestNode;
}

DoublyNode* DoublyLinkedList::getNodeByValue(int value){
    DoublyNode* currentNode = head_;
    
    while (currentNode && currentNode->getValue() != value) {
        currentNode = currentNode->getNextDoublyNode();
    }
    
    return currentNode;
}
