#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
  cout << "----------LINKED LIST TESTER----------" << endl;
	
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
	
  cout << "intList.size(): " << intList.size() << " [3]" << endl;
  cout << "intList.remove(1): " << intList.remove(1) << " [10]" << endl;
  cout << "intList.get(1): " << intList.get(1) << " [15]" << endl;
  cout << "intList.size(): " << intList.size() << " [2]" << endl;
  
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
	
  cout << "stringList.size(): " << stringList.size() << " [3]" << endl;
  cout << "stringList.remove(1): " << stringList.remove(1) << " [B]" << endl;
  cout << "stringList.get(1): " << stringList.get(1) << " [C]" << endl;
  cout << "stringList.size(): " << stringList.size() << " [2]" << endl;
	
  cout << "------------Testing toArray-------------"  << endl;
  cout << "intList.toArray(): " << intList.toArray() << endl;
  cout << "stringList.toArray(): " << stringList.toArray() << endl;
  
  
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

  cout << "intList.remove(10): ";
  try {
     intList.remove(10);
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
	
  cout << "stringList.remove(10): ";
  try {
     stringList.remove(10);
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

  cout << "intList.remove(-2): ";
  try {
     intList.remove(-2);
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
	
  cout << "stringList.remove(-2): ";
  try {
     stringList.remove(-2);
   }
  catch (const std::invalid_argument& ie) {
     cerr << "\tInvalid Argument error: " << ie.what() << endl;
  }
  
  cout << "-------------Testing Copy Constructor------------" << endl;
  cout << "LinkedList<T> intList2(intList)" << endl;
  cout << "LinkedList<T> stringList2(stringList)" << endl;
  LinkedList<T> intlist2(intList);
  LinkedList<T> stringList2(stringList);
  
  cout << "Testing get method on copied list" << endl;
  cout << "intList2.get(0): " << intList2.get(0) << " [5]" << endl;
  cout << "stringList2.get(0): " << stringList2.get(2) << " [A]" << endl;	

  cout << "-------------Testing Operator------------" << endl; 
  intList += stringList;
	
  cout << "intList += stringList: "; 
  cout << "intList.get(0): " << intList.get(0) << " [5]" << endl;
  cout << "intList.get(1): " << intList.get(1) << " [15]" << endl;
  cout << "intList.get(2): " << intList.get(2) << " [A]" << endl;
  cout << "intList.get(3): " << intList.get(3) << " [C]" << endl;  

  
}
