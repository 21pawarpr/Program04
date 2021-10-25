/***********************************
 * MiniQueue.cpp
 * Written by Prabhleen Pawar
 ***********************************/

 //Libraries
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Files to include
#include "MiniQueue.h"
template <class item>
class miniqueue;

/****************************************
 * Constructor
****************************************/
template<class item>
miniqueue<item>::miniqueue()
{
	//Initialize len
	len = 0;
}

/****************************************
 * Push 
****************************************/
template<class item>
void miniqueue<item>::push(item x)
{
	//Check if there is enough room
	if (len >= 10)
	{
		//Error message
		cout << "Not enough room!!" << endl;
		return;
	}

	//Add and increment len to keep updates size
	array[len++] = item;
}

/****************************************
 * Pop
****************************************/
template<class item>
void miniqueue<item>::pop()
{
	//Variable Declaration
	int i;

	//Check if there is anything ot delete
	if (len == 0)
	{
		//Error Message 
		cout << "There is nothing to delete" << endl;
		return;
	}

	//Deincrement len to update size
	len--;
}

/****************************************
 * Front
****************************************/
template <class item>
item miniqueue<item>::front()
{
	//Return first value 
	return array[0];
}

/****************************************
 * Size
****************************************/
template <class item>
int miniqueue<item>::size()
{
	return len;
}