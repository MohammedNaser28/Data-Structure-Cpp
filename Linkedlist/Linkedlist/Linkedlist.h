#pragma once
#include <iostream>
struct  Node
{
public:

	int data;
	Node* next;
	Node* back;
	//~Node();
};
using namespace std;
class Linkedlist
{
private:

	Node* The_end();

public:



	Node* head;

	Node* Tail;

	Linkedlist();

	~Linkedlist();

	bool isempty();

	void insertfirst(int newvalue);

	void beforelast(int newvalue);

	void afterfirst(int newvalue);

	void change(int oldvalue, int newvalue);

	//void test();

	//void formend();

	void Delete(int value);

	void insertspecif(int item, int newdata);

	void Append(int item);

	void Display();

	int count();

	bool isfound(int value);

	void replace(int oldvalue,int newvalue);

	void findRepetition();

	void clear();


};

