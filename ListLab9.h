#pragma once
#include "DoublyLinkedNode.h"
#include "DoublyLinkedNodeIterator.h"
#include <stdexcept>
template<class T>
class List
{
private:
	// auxiliary definition to simplify node usage
	typedef DoublyLinkedNode<T> Node;
	Node* fTop; // the first element in the list
	Node* fLast; // the last element in the list
	int fCount; // number of elements in the list
public:
	// auxiliary definition to simplify iterator usage
	typedef DoublyLinkedNodeIterator<T> Iterator;
	List(); // default constructor - creates empty list
	~List(); // destructor - frees all nodes
	bool isEmpty() const; // Is list empty?
	int size() const; // list size
					  // adds a node initialized with aElement at front
	void push_front(const T& aElement);
	// adds a node initialized with aElement at back
	void push_back(const T& aElement);
	// removes node that matches aElement from list
	void remove(const T& aElement);
	const T& operator[](unsigned int aIndex) const; // list indexer
													// returns an iterator for the nodes of the list
	Iterator getIterator() const;
};

template<class Datatype>
DoublyLinkedNode<class Data>::List()

{}