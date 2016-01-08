/*
 * main.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: thedarbb
 */

#include "Tree.h"
#include "Node.h"
#include <string>
#include <iostream>
using namespace std;

Node* a = new Node("The Boss");
Node* b = new Node("The Manager");
Node* c = new Node("The Supervisor");
Node* d = new Node("The Drone");
Node* e = new Node("The Intern");

Tree* tree = new Tree(a);

int main(){
	a -> addChild(b);
	a -> addChild(c);
	b -> addChild(d);
	d -> addChild(e);

	tree -> traverse();
}
