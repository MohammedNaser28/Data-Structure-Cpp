#include <iostream>
#include "Linkedlist.h"


using namespace std;



int main()
{
	Linkedlist lt;
	int length,item;
	cout << "Enter the length for list: ";
	cin >> length;
	for (int i = 0; i < length; ++i)
	{
		cout << "Enter the value " << i << " : ";
		cin >> item;
		lt.insertfirst(item);
	}
	cout << endl;

	cout << "The count of items: ";

	cout << lt.count();

	cout << endl;

	lt.Display();
	cout << endl;

	lt.replace(55, 505);
	lt.Display();
	//cout << "The count of items: ";

	//cout << lt.count();

	//cout << endl;
	//
	//int oldValue, newValue,append,del;

	//cout << "Enter the old value: ";
	//
	//cin >> oldValue;

	//cout << "Enter the new value: ";
	//
	//cin >> newValue;
	//
	//lt.insertspecif(oldValue, newValue);


	//cout << "The count of items: ";

	//cout << lt.count();

	//cout << endl;

	//lt.Display();

	//cout << endl;

	//cout << "Enter the item to append: ";

	//cin >> append;

	//lt.Append(append);

	//lt.Display();

	//cout << endl;

	//cout << "The count of items: ";

	//cout << lt.count();

	//cout << endl;

	//cout << "Enter the item to delete: ";

	//cin >> del;

	//lt.Delete(del);

	// lt.Display();
	// cout << endl;
	// cout << "The count of items: ";

	//cout << lt.count();

	//cout << endl;

	//lt.clear();

	//cout << lt.isempty();

	return 0;
}
