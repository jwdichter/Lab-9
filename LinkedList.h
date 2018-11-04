#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <list>
#include <vector>
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
LinkedList<T>::LinkedList() {}

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& other) {
   
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

}

template <class T>
T LinkedList<T>::remove(int index) {

}

template <class T>
vector<T> LinkedList<T>::toArray() const {
   
}

#endif
