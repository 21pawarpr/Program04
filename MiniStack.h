/***********************************
 * MiniStack declaration
 * Written by Prabhleen Pawar
 ***********************************/
#pragma once
template <class item>
class ministack
{
public:
	ministack();         //Constructor
	void push(item);	 //Add value to top
	void pop();		     //Remove value 
	item top();
	int size();

private:
	int len;
	item array[10];

};

#include "MiniStack.cpp"