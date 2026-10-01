#pragma once
#include "SimpleList.h"

template<typename T>
void Push(SimpleList<T>& list, T value)
{
	Node<T>* nodeNew = new Node<T>;
	nodeNew->value = value;
	nodeNew->next = list.head;
	list.head = nodeNew;
	list.size++;
}

template<typename T>
inline T Pop(SimpleList<T>& list)
{
	T value{ list.value };
	Node<T>* nodePop{ list.head };
	list.head = list.head->next;
	delete nodePop;
	list.size--;

	return value;
}

template<typename T>
inline T Peek(const SimpleList<T>& list)
{
	return list.head->value;
}

template<typename T>
void Print(SimpleList<T> list)
{
	while (list.head)
	{
		std::cout << list.head->value << " ";
		list.head = list.head->next;
	}
	std::cout << "\n";
}

template<typename T>
inline Node<T>* Find(SimpleList<T> list, T value)
{
	while (list.head)
	{
		if (list.head->value == value)
			return list.head;
		list.head = list.head->next;
	}
	return nullptr;
}

template<typename T>
inline void InsertAfter(SimpleList<T>& list, Node<T>* node, T value)
{
	Node<T>* nodeNew{ new Node<T> };
	nodeNew->value = value;
	nodeNew->next = node->next;
	node->next = nodeNew;

	list.size++;
}

template<typename T>
inline T Remove(SimpleList<T>& list, Node<T>* node)
{
	T value{ node->value };

	Node<T>* nodePrev{ list.head };
	while (nodePrev->next != node)
		nodePrev = nodePrev->next;

	nodePrev->next = node->next;
	delete node;

	return value;
}
