//Name:             Ahmed Butt, Muzhda Ehsan
//Student ID:       100770449, 100770164
//Last Modified:    September 30, 2020
//File:				OOP3200-F2020-Lab3

#pragma once

#ifndef _EXTENDEDWORKTICKET
#define _EXTENDEDWORKTICKET

#include <iostream>
#include <iomanip> 	
#include <stdexcept>
#include <sstream>
#include <utility>
#include "WorkTicket.h"

using namespace std;

class ExtendedWorkTicket: public WorkTicket
{
public:
	//Default and parameterized constructor
	~ExtendedWorkTicket();
	ExtendedWorkTicket(int ticket_number, const string& client_id, int day, int month, int year, const string&
		description, const bool is_open);

	//Accessor and mutator for isOpen value
	bool IsOpen();
	bool CloseTicket();

	//Overload SetWorkTicket
	bool SetWorkTicket(int ticket_number, const string& client_id, int day, int month, int year, const string&
		description, const bool is_open);

	//Override ShowWorkTicket
	void ShowWorkTicket() const override;

	//Overload << operator
	friend ostream& operator<<(ostream& out, const ExtendedWorkTicket& ticket);

private:
	bool isOpen;
};

//Method Definitions

#endif