#include "FrontListHasA.h"

template<class ItemType>
FrontListHasA<ItemType>::FrontListHasA() {}

template<class ItemType>
FrontListHasA<ItemType>::FrontListHasA(const FrontListHasA<ItemType>& other)
    : list(other.list) {}

template<class ItemType>
FrontListHasA<ItemType>::~FrontListHasA() {}

template<class ItemType>
bool FrontListHasA<ItemType>::insert(const ItemType& newEntry) {
    return list.insert(1, newEntry);
}

template<class ItemType>
bool FrontListHasA<ItemType>::remove() {
    return list.remove(1);
}

template<class ItemType>
ItemType FrontListHasA<ItemType>::retrieve() const {
    return list.getEntry(1);
}
