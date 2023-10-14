#include <iostream>
#include "Undo_Redo.h"

using namespace std;

int main()
{

	Undo_Redo* list = new Undo_Redo();
	Undo_Redo* list2 = new Undo_Redo();

	push(list, "Hello");
	cout << "Add - Hello :" << endl << "Display: " << top(list) << endl << endl;

	deleteText(list, list2);
	cout << "Delete:" << endl << "Display: " << top(list) << endl << endl;

	undo(list, list2);
	cout << "Undo:" << endl << "Display: " << top(list) << endl << endl;

	redo(list, list2);
	cout << "Redo:" << endl << "Display: " << top(list) << endl << endl;

	
}