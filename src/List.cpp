//List.cpp 
//Nathaniel Way 09252011

#include "../incl/List.h"

SLList::SLList()
{
	this->_next = 0;
}

SLList::~SLList()
{
	if( this->_next != 0 ){

		delete this->_next;
		printf("deleting %d\n", this->_next );
	}
}

void SLList::next( SLList* n )
{
	this->_next = n;
}

SLList* SLList::next()
{
	return this->_next;
}

DLList::DLList()
{
        this->_next = 0;
}

DLList::~DLList()
{
	if( this->_next != 0 ){
	        delete this->_next;
	}
	if( this->_prev != 0 ){
		delete this->_prev;
	}
}

void DLList::next( DLList* n )
{
        this->_next = n;
}

void DLList::prev( DLList* p )
{
	this->_prev = p;
}

DLList* DLList::next()
{
        return this->_next;
}

DLList* DLList::prev()
{
	return this->_prev;
}

