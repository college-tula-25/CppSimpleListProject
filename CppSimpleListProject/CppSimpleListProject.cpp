#include <iostream>
#include "SimpleList.h"

int main()
{
    SimpleList<int> list;

    Push(list, 100);
    Push(list, 200);
    Push(list, 300);
    Push(list, 400);
    Push(list, 500);

    Print(list);

    Node<int>* node = Find(list, 300);
    InsertAfter(list, node, 1000);

    Print(list);

    node = Find(list, 1000);
    Remove(list, node);

    Print(list);
}
