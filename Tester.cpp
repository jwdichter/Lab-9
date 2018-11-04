#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
	cout << "----------LINKED LIST TESTER----------" << endl;
	
	cout << "Testing constructors put/getters: " << endl;
	cout << "-------------------------" << endl;

	cout << "Linked List intList, Linked List stringList" << endl;
	LinkedList intList;
  LinkedList stringList
	
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
  
  cout << "------------Testing Illegal Indices-------------"  << endl;
  
  cout << "Index > size-1" << endl;
  cout << "intList.get(10): ";
   try {
     intList.get(10);
   }
   catch (const std::invalid_argument& ie) {
     cerr << "\tInvalid Argument error: " << ie.what() << endl;
   }
  
   std::cout << "\tiv.get(3): ";
   try {
     iv.get(3);
   }
   catch (const std::out_of_range& oor) {
     std::cerr << "\tOut of Range error: " << oor.what() << std::endl;
   }
   // test oor get() for negative index
   std::cout << "\tiv.get(-1): ";
   try {
     iv.get(-1);
   }
   catch (const std::out_of_range& oor) {
     std::cerr << "\tOut of Range error: " << oor.what() << std::endl;
   }

   std::cout << "--------------" << std::endl;
   std::cout << "Testing size()"  << std::endl;
   std::cout << "\t\tSize: "   << iv.size() << " [3]" << std::endl;
   iv.put(90);
   std::cout << "iv.put(90):" << "\tSize: " << iv.size() << " [4]" << std::endl;

   std::cout << "--------------" << std::endl;

}
