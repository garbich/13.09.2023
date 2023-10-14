#include "Undo_Redo.h"

Undo_Redo::Undo_Redo(){
	value = "";
	next = nullptr;
}

Undo_Redo::Undo_Redo(string value){
	this->value = value;
	next = nullptr;
}

void push(Undo_Redo*& head, string value){
	Undo_Redo* n = new Undo_Redo(value);

	if (head == nullptr){
		head = n;
		return;
	}

	n->next = head;

	head = n;
}

string top(Undo_Redo* head){
	return head->value;
}

string pop(Undo_Redo*& head){
	string value = head->value;

	head = head->next;

	return value;
}

void display(Undo_Redo* head){
	Undo_Redo* temp = head;

	while (temp != nullptr){
		cout << temp->value << " ";
		temp = temp->next;
	}
}



void deleteText(Undo_Redo*& head1, Undo_Redo*& head2){
	push(head2, pop(head1));
}

void undo(Undo_Redo*& head1, Undo_Redo*& head2){
	push(head1, pop(head2));

	clean(head2);
}

void redo(Undo_Redo*& head1, Undo_Redo*& head2){
	push(head2, pop(head1));

	clean(head2);
}

void clean(Undo_Redo*& head){
	while (head != nullptr){
		head = head->next;
	}

	head = new Undo_Redo();
}