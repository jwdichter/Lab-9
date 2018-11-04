#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <list>
#include <vector>
#include <iterator>
#include <stdexcept>
using namespace std;

template <class T>
class LinkedList
{
   private:
     std::list<T> theList;

   public:
     LinkedList();
     LinkedList(const LinkedList<T>& other);
     ~LinkedList();

     int  size() const;  // note: a const method
     void add(T element);

     T get(int index) const;  // note: a const method
     T remove(int index); 

     std::vector<T> toArray() const;  // note: a const method

     LinkedList<T>& operator+=( const T& item );
};

template <class T>
LinkedList<T>::LinkedList() {
   list<T> emptyList;
   theList = emptyList;
}

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& other) {
   theList = other.theList;
}

template <class T>
LinkedList<T>::~LinkedList() {}

template <class T>
int LinkedList<T>::size() const {
   return theList.size();
}

template <class T>
void LinkedList<T>::add(T element) {
   theList.push_back(element);
}

template <class T>
T LinkedList<T>::get(int index) const {
    if (index >= this->size() || index < 0) {
    string msg = "Invalid index: [" + to_string(index) + "]. " +
      "List Size: [" + to_string(this->size()) + "]. ";
    throw invalid_argument(msg.c_str());
    }
    list<T>::iterator it = theList.begin();
    advance(it, index);
    return *it;
}

template <class T>
T LinkedList<T>::remove(int index) {
   if (index >= this->size() || index < 0) {
      string msg = "Invalid index: [" + to_string(index) + "]. " + 
         "List Size: [" + to_string(this->size()) + "]. ";
      throw invalid_argument(msg.c_str());
      }
      list<T>::iterator it = theList.begin();
      advance (it, index);
      theList.erase(it);
      return *it; 
}

template <class T>
vector<T> LinkedList<T>::toArray() const {
   vector<T> v(begin(theList), end(theList));
   return v;
}

template <class T>
LinkedList<T>& LinkedList<T>::operator+=( const T& item ); {
   
   if (this != &item) {
      
      for (list<T>::iterator i = item.Begin(); i != item.End(); ++i) {
         this.push_back(i)
      }
      
      return *this;
   }
   
}

#endif
