#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
  LinkedList ll = LinkedList();
  ll.insertAt(5,0);
  ll.insertAt(3,99);
  ll.insertAt(5,0);
  ll.insertAt(5,0);
  ll.insertAt(14,0);
  ll.updateAt(13,0);
  ll.insertAt(5,0);
  ll.insertAt(5,0);
  ll.insertAt(5,0);
  ll.insertAt(5,0);
  ll.insertAt(5,0);
  ll.insertAt(14,0);
  ll.deleteAt(0);
  cout << "14 is at index : " << ll.search(14) << endl;
  cout << "The value at " << ll.search(14) << " is " << ll.findAt(ll.search(14)) << endl;
  cout << "13 is at index : " << ll.search(13) << endl;
  cout << "The value at " << ll.search(13) << " is " << ll.findAt(ll.search(13)) << endl;
  cout << ll.getSize() << endl;
  ll.print();
  
}
