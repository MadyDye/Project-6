#include <iostream>
#include "FrontListAsA.h"
using namespace std;

int main() {
    FrontListAsA<int> list;

    cout << "Testing As-A Implementation\n";

    list.insert(100);
    list.insert(200);
    list.insert(300);

    cout << "Front: " << list.retrieve() << endl;

    list.remove();
    cout << "After remove: " << list.retrieve() << endl;

    list.insert(400);
    cout << "After insert 400: " << list.retrieve() << endl;

    return 0;
}
