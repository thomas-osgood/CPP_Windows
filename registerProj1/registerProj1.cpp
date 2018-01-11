/******************************************************************* 
*	Author Name: Thomas Osgood									   *
*	Author Email: [redacted]@[redacted].com							   *	
*																   *
*	Purpose:													   *
*		- test C++ programming									   *
*		- try interacting with different custom headers            *
*																   *
*	Bug(s):														   *
*		- none													   *
*																   *
*	Fixes:														   *
*		- none													   *
*******************************************************************/
#include "stdafx.h"
#include <iostream>

using namespace std;

/********************************************************************
*                     Print Author Information						*
*********************************************************************
* Inputs:															*
*	- none															*
*																	*
* Returns:															*
*	- none															*
*																	*
* Description:														*
*	- print out author name, email, and phone number to standard	*
*	  output.														*
********************************************************************/
void Print_Author() {
	cout << endl << "Author: " << AUTHOR_NAME << endl;
	cout << "Author Email: " << AUTHOR_EMAIL << endl;
	cout << "Author Phone: " << AUTHOR_PHONE << endl;
}

/********************************************************************
*							Main Function							*
*********************************************************************
* Inputs:															*
*	- int argc : number of arguments								*
*	- char* argv[] : array of arguments								*
*																	*
* Returns:															*
*	- exit value : integer. 0 if successful exit.					*
*																	*
* Description:														*
*	- main program function. gets called each time the program is   *
*	  run.															*
********************************************************************/
int _tmain(int argc, _TCHAR* argv[])
{
	int number = TWO_PWR(10);
	int shifted = SHIFT_LEFT(0x0F);

	cout << "2 ^ 10: " << number << endl;
	cout << "10 Shifted Left One: " << shifted << endl;

	/* Display Author Information */
	Print_Author();

	/* Wait For User To Hit Enter */
	getchar();
	
	/* Successful Exit */
	return EXIT_SUCCESS;
}

