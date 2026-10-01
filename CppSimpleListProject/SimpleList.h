#pragma once
#include <iostream>

template<typename T>
struct Node
{
	T value;
	Node<T>* next{};
};

template<typename T>
struct SimpleList
{
	Node<T>* head{};
	size_t size{};
};

template<typename T>
void Push(SimpleList<T>& list, T value);

template<typename T>
T Pop(SimpleList<T>& list);

template<typename T>
T Peek(const SimpleList<T>& list);

template<typename T>
void Print(SimpleList<T> list);

template<typename T>
Node<T>* Find(SimpleList<T> list, T value);

template<typename T>
void InsertAfter(SimpleList<T>& list, Node<T>* node, T value);

template<typename T>
T Remove(SimpleList<T>& list, Node<T>* node);


#include "SimpleList.inl"