//
//  main.cpp
//  DataStructures
//
//  Created by Cristofer Silva on 13/07/23.
//

#include <iostream>
#include "DoublyLinkedList.h"

int main(int argc, const char * argv[]) {
    DoublyLinkedList doublyLinkedList;
    int doublyLinkedListLength;
    
    DoublyNode node1 = {1};
    DoublyNode node2 = {2};
    DoublyNode node3 = {3};
    DoublyNode node4 = {4};
    DoublyNode node5 = {5};
    DoublyNode node6 = {6};

    doublyLinkedList.addNewNode(node1);
    doublyLinkedList.addNewNode(node2);
    doublyLinkedList.addNewNode(node3);
    doublyLinkedList.addNewNode(node4);
    doublyLinkedList.addNewNode(node5);
    doublyLinkedList.addNewNode(node6);
    
    doublyLinkedListLength = doublyLinkedList.getLength();
    
    std::cout << doublyLinkedList.toString() << std::endl;
  
    return 0;
}
