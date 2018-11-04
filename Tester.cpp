#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
  cout << "----------LINKED LIST TESTER----------" << endl;
	
  cout << "Testing constructors put/getters: " << endl;
  cout << "-------------------------" << endl;

  cout << "Linked List intList, Linked List stringList" << endl;
  LinkedList intList;
  LinkedList stringList;
	
  cout << "------------Testing Add/Get/Remove/Size-------------"  << endl;
  cout << "Int:"<< endl;
  intList.add(5);
  intList.add(10);
  intList.add(15);
  
  cout << "intList.add(5)" << endl;
  cout << "intList.get(0): " << intList.get(0) << " [5]" << endl;
  cout << "intList.add(10)" << endl;
  cout << "intList.get(1): " << intList.get(1) << " [10]" << endl;
  cout << "intList.add(15)" << endl;
  cout << "intList.get(2): " << intList.get(2) << " [15]" << endl;
  cout << "intList.remove(1): " << intList.remove(1) << " [10]" << endl;
  cout << "intList.get(1): " << intList.get(1) << " [15]" << endl;
  
  cout << "String:" << endl;
  stringList.add("A");
  stringList.add("B");
  stringList.add("C");
  
  cout << "stringList.add(\"A\")" << endl;
  cout << "stringList.get(0): " << stringList.get(0) << " [A]" << endl;
  cout << "stringList.add(\"B\")" << endl;
  cout << "stringList.get(1): " << stringList.get(1) << " [B]" << endl;
  cout << "stringList.add(\"C\")" << endl;
  cout << "stringList.get(2): " << stringList.get(2) << " [C]" << endl;
  cout << "stringList.remove(1): " << stringList.remove(1) << " [B]" << endl;
  cout << "stringList.get(1): " << stringList.get(1) << " [C]" << endl;
	
  
  
  cout << "------------Testing Illegal Indices-------------"  << endl;
  
  cout << "------Index > size-1-------" << endl;
  cout << "Int:" << endl;
  cout << "intList.get(10): ";
  try {
     intList.get(10);
   }
  catch (const std::invalid_argument& ie) {
     cerr << "\tInvalid Argument error: " << ie.what() << endl;
  }
	
  cout << "String:" << endl;
  cout << "stringList.get(10): ";
  try {
     stringList.get(10);
   }
  catch (const std::invalid_argument& ie) {
     cerr << "\tInvalid Argument error: " << ie.what() << endl;
  }   
	
  cout << "------Index < 0-------" << endl;
  cout << "Int:" << endl;
  cout << "intList.get(-1): ";
  try {
     intList.get(-1);
   }
  catch (const std::invalid_argument& ie) {
     cerr << "\tInvalid Argument error: " << ie.what() << endl;
  }
	
  cout << "String:" << endl;
  cout << "stringList.get(-1): ";
  try {
     stringList.get(-1);
   }
  catch (const std::invalid_argument& ie) {
     cerr << "\tInvalid Argument error: " << ie.what() << endl;
  }  
}
