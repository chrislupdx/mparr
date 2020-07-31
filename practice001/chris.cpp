#include "arr.h"
//rm the last node from every ll in an arr
//arr[i] == head pointer 
//remove(takes a pointer from a lll) //wrapper (find and remove every LL in an arr)
//remove(arr[i]) //moves through the array (traverse and remove the array)
//remove node @ EOL
int table::remove(node *& head)
{
   if(!head) return 0; 
   
   if(!head->next)
   {
       delete head;
       head = NULL;
       return 1;
   }
    return remove(head->next);
}

int table::removeArr()
{
    int count = 0;
    return removeArr(count);
}

//recursive call
int table::removeArr(int & count)
{
    if(count == size) return 0;
    std::cout << "count is " << count << std::endl;
    count += 1;
    remove(head[count]);
    //count++;
    return removeArr(count) + 1;
}

//traverse the table
//int table::removeArr()
//{
//    //traverse through the arr of ehad pointers
//    for (int i = 0; i < size; i++)
//    {
//        remove(head[i]); 
//    }
//    return 1;
//}


