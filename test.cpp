#include <iostream>
#include <cstdlib>
#include "IntegerList.h"
#include "IntegerList.cpp"

using namespace std;

int main() {
	IntegerList list;//creating a new object list
	

	//adding into the list
	for(int a = 1; a <6;a++)
	{
		list.addFront(a);
	}
	cout<<"test the front "<<endl;
	int front = list.front();
	cout << front << endl;

	int size = list.size();
	cout<<"list size: "<<size <<endl;
	
	cout<< "printing out list from for loop inputs"<<endl;
	list.print(); //print the list
	cout << "adding 8 to the front" <<endl;
	list.addFront(8);
	list.print();
	cout<< "adding 6 to the front" <<endl;
	list.addFront(6);
	list.print();

	cout << "removing front"<<endl;
	list.removeFront();
	list.print();

	cout << "inserting 2 at position 2" <<endl;
	list.AddAtPosition(2, 2);
	list.print();

	cout << "finding the sum" <<endl;
	int sum = list.sum();
	cout << "final sum: "<<sum <<endl;



	//list.~IntegerList();
	cout<< "\nprogram complete..."<<endl;
	return 0;
}
