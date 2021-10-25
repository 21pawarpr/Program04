/***********************************
 * MiniQueue declaration
 * Written by Prabhleen Pawar
 ***********************************/
#pragma once
template<class item>
class miniqueue
{
public:
	miniqueue();         //Constructor
	void push(item);	 //Add value
	void pop();			 //Remove value from front (FIFO)
	item front();		 //Return value from front
	int size();          //Return size of array

private:
	item array[10];      //Array for values
	int len;			 //Number of values in array
};

#include "MiniQueue.cpp"