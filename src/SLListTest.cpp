//SLListTest.cpp
//Nathaniel C Way 09292011


#include "../incl/List.h"
#include <string>
#include <stdio.h>

using namespace std;

int main( int argc, char** argv ){
	
	SLList* head = 0;
	SLList* stick = head;
	for( int i = 0; i < 35; i++ ){
		stick = head;
		head = new SLList;
		head->next( stick );
		printf( "%d\n", head );
	}
	delete head;
	printf( "head is %d ", head );
}



