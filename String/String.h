#ifndef STRING_H_
#define STRING_H_
#include <stdlib.h>


template <class TYPE>
class string
{

public:

	TYPE string;

	string(TYPE*word)
	{
		uint i = 0;
		while (word[i] != 0 && word[i] != '\0')
		{
			string[i] = word[i];
			i++;
		}
	}
	//string(TYPE* word): word(word) {}

	
	~string(){}

	string operator =(string word)
	{
		
		for (int i = 0; word[i] != '/0'; i++)
		{

		}
			
		word = 
	}

};


#endif // !STRING_H
