#pragma once

#include <iostream>
using namespace std;

class Undo_Redo
{
public:
	string value;
	Undo_Redo* next;

	Undo_Redo();
	Undo_Redo(string);

};
	void push(Undo_Redo*&, string);

	string top(Undo_Redo*);

	string pop(Undo_Redo*&);

	void display(Undo_Redo*);

	

	void clean(Undo_Redo*&);

	void deleteText(Undo_Redo*&, Undo_Redo*&);

	void undo(Undo_Redo*&, Undo_Redo*&);

	void redo(Undo_Redo*&, Undo_Redo*&);

