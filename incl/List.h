//List.h
//Nathaniel Way 09252011

#ifndef SLLIST_H
#define SLLIST_H


Class SLList
{

	public:
	SLList();
	~SLList()	

	SLList* next();
	void next( SLList* );
	
	private:
	SLList* _next;

};

#endif

#ifndef DLLIST_H
#define DLLIST_H

Class  DLList
{
	public:
	DLList();
	~DLList();

	DLList* next();
	void next( DLList* );
	
	DLList* prev();
	void prev( DLList* );

	private:
	DLList* _next;
	DLList* _prev;
};

#endif

