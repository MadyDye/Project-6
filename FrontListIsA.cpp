#include "FrontListIsA.h"

template<class ItemType>
FrontListIsA<ItemType>::FrontListIsA() {}

template<class ItemType>
FrontListIsA<ItemType>::FrontListIsA(const FrontListIsA<ItemType>& other)
    : LinkedList<ItemType>(other) {}

template<class ItemType>
FrontListIsA<ItemType>::~FrontListIsA() {}

template<class ItemType>
bool FrontListIsA<ItemType>::insert(const ItemType& newEntry) {
    return LinkedList<ItemType>::insert(1, newEntry);
}

template<class ItemType>
bool FrontListIsA<ItemType>::remove() {
    return LinkedList<ItemType>::remove(1);
}

template<class ItemType>
ItemType FrontListIsA<ItemType>::retrieve() const {
    return LinkedList<ItemType>::getEntry(1);
}

template<class ItemType>
void FrontListIsA<ItemType>::clear() {
    while (!this->isEmpty()) {
        LinkedList<ItemType>::remove(1);
    }
}
