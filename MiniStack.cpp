/***********************************
 * MiniStack.cpp
 * Written by Prabhleen Pawar
 ***********************************/

//Libraries
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Files to include
#include "MiniStack.h"
template <class item>
class ministack;

/***********************************
 * Constructor
 ***********************************/
 //Template class
template<class item>
ministack<item>::ministack()
{
	//Intialize len
	len = 0;
}

/***********************************
 * Push
 ***********************************/
 //Template class
template<class item>
void ministack<item>::push(item x)
{
	//Variable declaration
	int i;

	//Check if array is proper size
	if (len >= 10)
	{
		cout << "Too many values!" << endl;
		return;
	}

	for (i = len; i > 0; i--)
	{
		array[i] = array[i - 1];

	}
	array[0] = x; 

	//Increment len to keep update size
	len++; 
}


/***********************************
 * Pop
 ***********************************/
 //Template class
template<class item>
void ministack<item>::pop()
{
	//Variable Declaration
	int i;

	//Check if there is anything to remove
	if (len == 0)
	{
		//Error Message
		cout << "Nothing to remove!!" << endl;
		return;
	}

	for (i = 1; i < len; i++)
	{
		array[i - 1] = array[i];
	}
	
	//Deincrements len to have updated size 
	len--;
}

/***********************************
 * Top
 ***********************************/
 //Template class
template<class item>
item ministack<item>::top()
{
	//Return first value
	return array[0];
}

/***********************************
 * Size
 ***********************************/
 //Template class
template<class item>
int ministack<item>::size()
{
	//Returns size
	return len; 
}