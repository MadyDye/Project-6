#include "FrontListAsA.h"

template<class ItemType>
FrontListAsA<ItemType>::FrontListAsA() {}

template<class ItemType>
FrontListAsA<ItemType>::FrontListAsA(const FrontListAsA<ItemType>& other)
    : LinkedList<ItemType>(other) {}

template<class ItemType>
FrontListAsA<ItemType>::~FrontListAsA() {}

template<class ItemType>
bool FrontListAsA<ItemType>::insert(const ItemType& newEntry) {
    return LinkedList<ItemType>::insert(1, newEntry);
}

template<class ItemType>
bool FrontListAsA<ItemType>::remove() {
    return LinkedList<ItemType>::remove(1);
}

template<class ItemType>
ItemType FrontListAsA<ItemType>::retrieve() const {
    return LinkedList<ItemType>::getEntry(1);
}
