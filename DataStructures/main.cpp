//
//  main.cpp
//  DataStructures
//
//  Created by Cristofer Silva on 13/07/23.
//

#include <iostream>
#include "DoublyLinkedList/DoublyLinkedList.h"

void buildDoublyLinkedList(DoublyLinkedList &doublyLinkedList, int nodesQuantity) {
    DoublyNode* nodesPtr = (DoublyNode*) calloc(nodesQuantity, sizeof(DoublyNode));
    for (int i = 0; i < nodesQuantity ; i++) {
        nodesPtr[i] = DoublyNode {i + 1};
        doublyLinkedList.addNewNode(&nodesPtr[i]);
    }
}

int main(int argc, const char * argv[]) {
    DoublyLinkedList doublyLinkedList;
    int doublyLinkedListLength;
    
    buildDoublyLinkedList(doublyLinkedList, 6);
    
    doublyLinkedListLength = doublyLinkedList.getLength();
    
    DoublyNode* currentNode = doublyLinkedList.getNodeByValue(2);
    
    std::cout << doublyLinkedList.toString() << std::endl;
    
    std::cout << "Largest Node in DoublyLinkedList: "
    << doublyLinkedList.getLargestNode()->getValue()
    << std::endl;
    
    std::cout << "Smallest Node in DoublyLinkedList: "
    << doublyLinkedList.getSmallestNode()->getValue()
    << std::endl;
    
    
    DoublyLinkedList* listOrdered = doublyLinkedList.getOrderedList(OrderType::DESC);
    auto listToArray =  doublyLinkedList.toArray();
    
    return 0;
}
