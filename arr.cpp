//arr.cpp
#include "arrref.h"

//returns the # of matches to the first item in the arry
int table::firstCount() //this likely traverses
{
    return firstCount(head, 0); //traverse through the array of head pointers
}

//go through the array of head pointers
int table::firstCount(node ** head, int index) 
{
    if(index == size) return 0; //for the line of head pointers...
    return lineCount(head[index]->next, head[index]->data) + firstCount(head, (index + 1));
}

//goes through the inner LLL
int table::lineCount(node * head, int i)
{
    if(!head) return 0;
    if(head->data == i)
    {
        return lineCount(head->next, i) + 1;
    }
    return lineCount(head->next, i);
}

int table::cpFr(table & tabletocp)
{

    std::cout << size << "is size" << std::endl;
    node ** head = tabletocp.head;
    int i = 0;
    return cpFr(head, i);
}

//this call goes through each of the 
int table::cpFr(node ** head, int i)
{
    if(i == size) return 0;
    cpFr(this->head[i], head[i]); //calls the 

    return cpFr(head,(i + 1));
}

//copies LLL in each array
int table::cpFr(node *& d, node * src)
{
    if(!src)
    {
        d = NULL;
        return 0;
    }
    d = new node;
    d->data = src->data;
    return cpFr(d->next, src->next);
}

//node ** head == the whole table
//node ** head == an array of LLLs
//node * head == the head pointer to an LLL
//

//wrapper
//int table::removeLast()
//{
//    int count = 0;
//    //head[0] == the start of the list of head pointers right?
//    return removeLast(head[0], count); //this call goes tries to og through the array of head pointers
//}
//
////traverses through an array of head pointers
//int table::removeLast(node *& head,int count)
//{
//    if(count == size) return 0;
//    
//    //removeLast(table[count]->head); //goes through this specific head pointer's LLL to delete final node
//
//    count =+ 1; //move to the next head of the list
//    return removeLast(node[count], count); 
//}

//this goes through the linear linked list and removes the final node
int table::removeLast(node *& head)
{
    if(!head)
    {
        //removej
        return 0;
    }
    return removeLast(head->next);
}







int table::rmflist()
{
    int count = 0;
    return traversetable(count);
}

int table::traversetable(int count)
{
    if(count == size) return 0;
    if(count == (size - 1))
    {
        removelist(head[count]);
        return 1;
    }
    count++;
    return traversetable(count);
}

//recursively de-allocate a lll
int table::removelist(node *& head)
{
    if(!head) return 0;  //base

    int count = removelist(head->next) + 1;

    delete head; //your original guess about deletion was right!
    head = NULL;
    return count;
}




































