#pragma once

#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

template <class T>
class clsMyQueue
{

protected:
	clsDblLinkedList<T> _MyList;

public:

	void push(T Item)
	{
		_MyList.InsertAtEnd(Item);
	}
	
	void pop()
	{
		_MyList.DeleteFirstNode();
	}

	int Size()
	{
		return _MyList.Size();
	}

	T front()
	{
		return _MyList.GetItem(0);
	}

	T back()
	{
		return _MyList.GetItem(Size() - 1);
	}

	void Print()
	{
		_MyList.PrintList();
	}

	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	T GetItem(int index)
	{
		return _MyList.GetItem(index);
	}

	void Reverse()
	{
		_MyList.Reverse();
	}

	void UpdateItem(int index,T NewValue)
	{
		_MyList.UpdateItem(index, NewValue);
	}

	void InsertAfter(int index, T Value)
	{
		_MyList.InsertAfter(index, Value);
	}

	void InsertAtFront(T Value)
	{
		_MyList.InsertAtBeginning(Value);
	}

	void InsertAtBack(T Value)
	{
		_MyList.InsertAtEnd(Value);
	}

	void Clear()
	{
		_MyList.Clear();
	}
	
};

