#ifndef FRONT_LIST_ASA_H
#define FRONT_LIST_ASA_H

#include "LinkedList.h"

template<class ItemType>
class FrontListAsA : private LinkedList<ItemType> {
public:
    bool insert(const ItemType& newEntry) {
        return LinkedList<ItemType>::insert(1, newEntry);
    }

    bool remove() {
        return LinkedList<ItemType>::remove(1);
    }

    ItemType retrieve() const {
        return LinkedList<ItemType>::getEntry(1);
    }
};

#endif
