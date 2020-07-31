//arr.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
struct node
{
    int data;  //some questions are char * data;
    node * next;
};

class table
{
    public:
    /* These functions are already written */
       table();		//supplied
       ~table();	//supplied
       void build();  	//supplied
       void display();  //supplied

    /* *****************YOUR TURN! ******************************** */
    //Write your function prototype here:
    int removeLast(); //wrapper
    int removeLast(node **& head, int count);
    int removeLast(node *& head);
    int llend(node *& head, node *& nodetoadd);
    int llend(node *& nodetoadd, int count);
    int firstCount();
    int firstCount(node ** head, int index);
    int lineCount(node * head, int i); //how do we make it take array stuff
    int cpFr(node *& d, node * src);//wrapper
    int cpFr(table & tabletocp);//
    int cpFr(node ** head, int i);
    private:
       node ** head; 	//dynamically allocated array
       int size; 	//the array size
};
