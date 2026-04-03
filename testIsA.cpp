#include <iostream>
#include "FrontListIsA.h"
using namespace std;

int main() {
    FrontListIsA<int> list;

    cout << "Testing Is-A Implementation\n";

    list.insert(5);
    list.insert(15);
    list.insert(25);

    cout << "Front: " << list.retrieve() << endl;

    list.remove();
    cout << "After remove: " << list.retrieve() << endl;

    list.insert(35);
    cout << "After insert 35: " << list.retrieve() << endl;

    return 0;
}
