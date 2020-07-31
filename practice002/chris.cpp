#include "arr.h"

//remove all nodes from the last linear linked list in an ARR

//reach the last item in the array of head pointers

//de-allocate an entire linear linked list

int table::rmwholeList()
{
    int count = 0;
    return traversearray(count);
}

int table::traversearray(int & count)
{
    if(count == size)
    {
        removeall(head[count]);
        return 0;
    }
    ++count;

    return traversearray(count);
}


//do we de-allocate the final head pointer though?

int table::removeall(node *& head)
{
    if(!head) return 0;

    return removeall(head->next);

    node * temp = head->next;
    delete head;
    head = temp; //reconnect
}
