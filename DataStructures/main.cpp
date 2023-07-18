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
    
    std::cout << doublyLinkedList.toString() << std::endl;
    std::cout << "Highest Node in DoublyLinkedList: " << doublyLinkedList.getHighestNode()->getValue() << std::endl;
  
    return 0;
}
