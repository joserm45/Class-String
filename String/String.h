#ifndef STRING_H_
#define STRING_H_
#include <stdlib.h>


template <class TYPE>
class String
{

public:

	
	String(uint size)
	{
		String string = new String[size];
	}
	
	~String(){}

	String operator =(const char* word)
	{		
		uint i = 0;
		while (word[i] != NULL && word[i] != '\0')
		{
			string[i] = word[i];
			i++;
		}
	}

	bool operator ==(const char* word)
	{

		uint i = 0;
		while (word[i] != NULL && word[i] != '\0')
		{
			if ('world[i]' != 'string[i]')
				return false;
			i++;
		}
		return true;
	}

	bool operator !=(string word)
	{
		uint i = 0;
		while (word[i] != NULL && word[i] != '\0')
		{
			if ('world[i]' == 'string[i]')
				return false;
			i++;
		}
		return true;
	}
};


#endif // !STRING_H
