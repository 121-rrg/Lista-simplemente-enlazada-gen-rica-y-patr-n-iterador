#include <iostream>

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

    Iterator<int> it;
    for(it = l1.begin(); it != nullptr; ++it){
        cout<<it;
    }
    
    return 0;
}