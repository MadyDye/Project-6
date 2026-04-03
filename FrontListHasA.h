#ifndef FRONT_LIST_HASA_H
#define FRONT_LIST_HASA_H

#include "FrontListInterface.h"
#include "LinkedList.h"

template<class ItemType>
class FrontListHasA : public FrontListInterface<ItemType> {
private:
    LinkedList<ItemType> list;

public:
    bool insert(const ItemType& newEntry) {
        return list.insert(1, newEntry);
    }

    bool remove() {
        return list.remove(1);
    }

    ItemType retrieve() const {
        return list.getEntry(1);
    }
};

#endif
