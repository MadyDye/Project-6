#ifndef FRONT_LIST_INTERFACE_H
#define FRONT_LIST_INTERFACE_H

template<class ItemType>
class FrontListInterface {
public:
    virtual bool insert(const ItemType& newEntry) = 0;
    virtual bool remove() = 0;
    virtual ItemType retrieve() const = 0;

    virtual ~FrontListInterface() {}
};

#endif
