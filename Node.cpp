/*
 * Node.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#include "Node.h"

Node::Node(std::string name) :_name(name) ,_first(NULL), _last(NULL), _next(NULL)
{

}

Node::~Node()
{

}

void Node::addChild(Node *child)
{
	if(_first == NULL) //if the list is empty
	{
		_first = child;
		_last = child;
	}else // the list is not empty
	{
		_last -> _next = child;
		_last = child;
	}
}

