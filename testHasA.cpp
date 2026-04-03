#include <iostream>
#include "FrontListHasA.h"
using namespace std;

int main() {
    FrontListHasA<int> list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    cout << "Front item: " << list.retrieve() << endl;

    list.remove();
    cout << "After remove: " << list.retrieve() << endl;

    return 0;
}
