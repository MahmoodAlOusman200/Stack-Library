#pragma once

#include <iostream>
using namespace std;

template <class T>
class clsDblLinkedList
{
protected:
	int _Size = 0;
public:

	class Node
	{
	public:
		T Value;
		Node* Next;
		Node* Prev;
	};

	Node* Head = NULL;

	void InsertAtBeginning(T Value)
	{
		Node* NewNode = new Node;

		NewNode->Next = Head;
		NewNode->Prev = NULL;
		NewNode->Value = Value;

		if (Head != NULL)
			Head->Prev = NewNode;

		Head = NewNode;

		_Size++;
	}

	void PrintList()
	{
		Node* Temp = Head;
		while (Temp != NULL)
		{
			cout << Temp->Value << " ";
			Temp = Temp->Next;
		}
		cout << endl;
	}

	Node* FindNode(T Value)
	{
		Node* Temp = Head;

		while (Temp != NULL)
		{
			if (Temp->Value == Value)
				return Temp;

			Temp = Temp->Next;
		}

		return NULL;
	}

	void InsertAfter(Node* NodeToInsertAfter, T Value)
	{
		if (NodeToInsertAfter == NULL)
			return;

		Node* NewNode = new Node;

		NewNode->Value = Value;
		NewNode->Prev = NodeToInsertAfter;
		NewNode->Next = NodeToInsertAfter->Next;

		if (NodeToInsertAfter->Next != NULL)
			NodeToInsertAfter->Next->Prev = NewNode;

		NodeToInsertAfter->Next = NewNode;

		_Size++;
	}

	void InsertAtEnd(T Value)
	{
		Node* NewNode = new Node;
		NewNode->Value = Value;
		NewNode->Next = NULL;

		if (Head == NULL)
		{
			NewNode->Prev = NULL;
			Head = NewNode;
		}

		else
		{
			Node* Current = Head;

			while (Current->Next != NULL)
			{
				Current = Current->Next;
			}

			NewNode->Prev = Current;
			Current->Next = NewNode;
		}

		_Size++;
	}

	void DeleteNode(Node*& NodeToDelete)
	{
		if (Head == NULL || NodeToDelete == NULL)
			return;

		if (Head == NodeToDelete)
			Head = NodeToDelete->Next;

		if (NodeToDelete->Prev != NULL)
			NodeToDelete->Prev->Next = NodeToDelete->Next;

		if (NodeToDelete->Next != NULL)
			NodeToDelete->Next->Prev = NodeToDelete->Prev;

		delete NodeToDelete;
		_Size--;
	}

	void DeleteFirstNode()
	{
		if (Head == NULL) return;

		Node* Current = Head;

		Head = Head->Next;
		if (Head != NULL)
			Head->Prev = NULL;

		delete Current;
		_Size--;
	}

	void DeleteLastNode()
	{
		if (Head == NULL)
			return;

		if (Head->Next == NULL)
		{
			delete Head;
			Head = NULL;
			_Size--;
			return;
		}

		Node* Current = Head;
		while (Current->Next->Next != NULL)
		{
			Current = Current->Next;
		}

		Node* Temp = Current->Next;
		Current->Next = NULL;
		delete Temp;

		_Size--;
	}

	short Size()
	{
		return _Size;
	}

	bool IsEmpty()
	{
		return _Size == 0;
	}

	void Clear()
	{
		while (_Size > 0)
			DeleteFirstNode();
	}

	void Reverse()
	{
		Node* Current = Head;
		Node* Temp = NULL;
		Node* LastNode = NULL;

		while (Current != NULL)
		{
			LastNode = Current;
			Temp = Current->Next;
			Current->Next = Current->Prev;
			Current->Prev = Temp;
			Current = Current->Prev;
		}

		if (LastNode != NULL)
			Head = LastNode;
	}

	Node* GetNode(int index)
	{
		int Counter = 0;

		if (index > _Size - 1 || index < 0)
			return NULL;

		Node* Current = Head;
		while (Current != NULL && Current->Next != NULL)
		{
			if (Counter == index)
				break;
			Current = Current->Next;
			Counter++;
		}

		return Current;
	}

	T GetItem(int index)
	{
		Node* ItemNode = GetNode(index);

		return ItemNode != NULL ? ItemNode->Value : NULL;
	}

	bool UpdateItem(int index, T NewValue)
	{
		Node* ItemNode = GetNode(index);

		if (ItemNode != NULL)
		{
			ItemNode->Value = NewValue;
			return true;
		}
		else
			return false;

	}

	bool InsertAfter(int index, T Value)
	{
		Node* ItemNode = GetNode(index);

		if (ItemNode != NULL)
		{
			InsertAfter(ItemNode, Value);
			return true;
		}

		else
			return false;
	}

};


