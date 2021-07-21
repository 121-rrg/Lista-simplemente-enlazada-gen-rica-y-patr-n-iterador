#include <iostream>
#include "LinkedList.h"
#include "iterator.h"
using namespace std;

int main() {
    LinkedList<int> l1;
    LinkedList<char> l2;

    cout<<"Lista de enteros"<<endl;
    l1.insert(9999,0);
    l1.insert(1,1);
    l1.insert(2,2);
    l1.insert(3,3);
    l1.insert(4,4);
    l1.insert(5,5);
    l1.insert(100,5);
    cout<<l1;
    cout<<"Lista de caracteres"<<endl;
    l2.insert('a',0);
    l2.insert('b',1);
    l2.insert('c',3);
    l2.insert('d',2);
    cout<<l2;

    Iterator<int> it;
    for(it = l1.begin(); it != nullptr ; ++it)
        cout<<it;
    
    /*
    Iterator<int> it;
    while(it != l1.end()){
        cout<<it<<endl;
    }
    */
    return 0;
}