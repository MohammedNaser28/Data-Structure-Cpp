#include "Linkedlist.h"



Node * Linkedlist::The_end()
{
	
		if (!isempty())
		{
				Node* temp = head;
				while (temp->next != NULL)
				{
					temp = temp->next;
				}
				return temp;
		}
		else
		{
				cerr << "The list is empty.";
				return NULL;
		}
		
}

Linkedlist::Linkedlist()
{
	head = NULL;
	Tail = NULL;
}

Linkedlist::~Linkedlist()
{
	while (head != NULL)
	{
		Node* temp = head;
		head = head->next;
		delete temp;

	}

}
bool Linkedlist::isempty()
{
	return (head == NULL);
}

void Linkedlist::insertfirst(int newvalue)
{
	Node* newnode = new Node();
	newnode->data = newvalue;


	if (isempty())
	{
		newnode->next = NULL;
		
		newnode->back = NULL;

		head = newnode;

		Tail = newnode;
	}
	else
	{
		
		newnode->next = head;

		head->back = newnode;

		head = newnode;

		Tail = The_end();
	}

}

void Linkedlist::beforelast(int newvalue)
{
	Node* newnode = new Node();
	newnode->data = newvalue;


	if (isempty())
	{
		insertfirst(newvalue);
	}
	else
	{
		Node *temp = Tail->back;

		newnode->next = Tail;

		newnode->back = Tail->back;

		Tail->back = newnode;

		temp->next = newnode;


	}

}

void Linkedlist::afterfirst(int newvalue)
{
	Node* newnode = new Node();
	newnode->data = newvalue;
	if (isempty())
	{
		insertfirst(newvalue);
	}
	else
	{
		Node* temp = head->next;

		newnode->back = head;

		head->next = newnode;

		newnode->next = temp;
	}
}

//void Linkedlist::formend()
//{
//	Node* end = Tail;
//
//	while (end !=  NULL)
//	{
//		cout << end->data << '\t';
//		end = end->back;
//	}
//}

//void Linkedlist::test()
//{
//	Node* tes = The_end();
//	cout << tes->data;
//}
void Linkedlist::Delete(int value)
{
	Node* del = head;
	head = head->next;
	delete del;
	if (isfound(value) && !isempty())
	{
		Node* delet= head;
		head = head->next;
		delete delet;
	}
	else if(isempty())
	{
		cerr << "The linked list is empty";
	}
	else
	{
		cerr << "Not Found";
	}
}

void Linkedlist::change(int oldvalue, int newvalue)
{
	if (isfound(oldvalue))
	{
		Node* temp = head;
		while (temp->data != oldvalue)
		{
				temp = temp->next;
		}
			temp->data = newvalue;
		
	}
	else

	{
		cerr << "There is An error";
	}

}

void Linkedlist::insertspecif(int item, int newdata)
{
	Node* newnode;
	newnode = new Node();
	newnode->data = newdata;
	Node* temp = head;

	if (isfound(item))
	{
		while (temp != NULL && temp->next->data != item)
		{
			temp = temp->next;
		}
		newnode->next = temp->next;

		temp->next = newnode;

	}
	else
	{
		cerr << "Not Found";
	}

}

void Linkedlist::Append(int newvalue)
{

	if (!isempty())
	{

		Node* newnode = new Node();

		newnode->back = Tail;

		Tail->next = newnode;
		
		Tail = newnode;

		Tail->data = newvalue;

	}
	else
	{
		insertfirst(newvalue);
	}
}

void Linkedlist::Display()
{
	if (!isempty())
	{
		Node* temp = head;
		while (temp != NULL)
		{
		cout << temp->data << "\t";

		temp = temp->next;

		}
	delete temp;
	}
	else
	{
		cerr << "The list is empty.";
	}

}

int Linkedlist::count()
{
	int counter = 0;
	if (!isempty())
	{

		Node* temp = head;
		while (temp != NULL)
		{
			counter++;
			temp = temp->next;

		}
		delete temp;
	}
	else
	{

	}
	return counter;
}

bool Linkedlist::isfound(int value)
{
	if (!isempty())
	{
		bool found = false;
		Node* temp = head;
		while (temp != NULL)
		{
			if (temp->data == value)
			{
				found = true;
				break;
			}
			temp = temp->next;
		}
		return found;
	}
	else
	{
		cerr << "The List is empty.";

		return -1;
	}

	
}

void Linkedlist::replace(int oldvalue, int newvalue)
{
	if (isfound(oldvalue))
	{
		Node* temp = head;
		while (temp->data != oldvalue)
		{
			temp = temp->next;
		}
		temp->data = newvalue;
	}
}

void Linkedlist::findRepetition()
{

}

void Linkedlist::clear()
{

	while (head != NULL)
	{
		Node* temp = head;
		head = head->next;
		delete temp;

	}

}







//Node Linkedlist::The_end()
//{
//	if (!isempty())
//	{
//		Node* temp = head;
//		while (temp != NULL)
//		{
//			temp = temp->next;
//		}
//	}
//	else
//	{
//		cerr << "The list is empty.";
//	}
//}
//Node::~Node()
//{
