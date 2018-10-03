#ifndef STRING_H_
#define STRING_H_
#include <string.h>
#include <assert.h>


class String
{
private:	
	
	char* string = nullptr;
	unsigned int size_memory;

public:

	String() 
	{	}
	String(char* string)
	{
		assert(string != NULL);
		if (string != NULL)
		{
			size_memory = strlen(string) + 1;
			this->string = new char[size_memory];
		}
		unsigned int i = 0;
		while (this->string[i] != '\0' && string[i] != '\0')
		{
			this->string[i] = string[i];
			i++;
		}
		
		this->string[i] = '\0';
	}

	String(String* word)
	{
		if (word != NULL)
		{
			unsigned int i = 0;
			while (this->string[i] != '\0' && string[i] != '\0')
			{
				this->string[i] = string[i];
				i++;
			}

			this->string[i] = '\0';
		}
	}
	/*String(unsigned int size)
	{
		String string = new String[size];
	}*/
	
	~String()
	{
		if (string != NULL)
		{
			
			delete[]string;
			string = nullptr;
			size_memory = 0;
		}
		
	}

	String operator =(const char* word)
	{		
		unsigned int i = 0;
		if (word != NULL)
		{
			
			delete[]this->string;

			if (strlen(string) > size_memory)
			{

			}
			else
			{

			}
			size_memory = strlen(string) + 1;
			this->string = new char[size_memory];
			while (word[i] != NULL && word[i] != '\0')
			{
				string[i] = word[i];
				i++;
			}
		}
		
		return *this;
	}

	bool operator ==(const char* word)
	{

		unsigned int i = 0;
		while (word[i] != NULL && word[i] != '\0')
		{
			if ("world[i]" != "string[i]")
				return false;
			i++;
		}
		return true;
	}

	const char GetString()
	{
		this->string
	}

	/*bool operator !=(String word)
	{
		unsigned int i = 0;
		while (word[i] != NULL && word[i] != '\0')
		{
			if ('world[i]' == 'string[i]')
				return false;
			i++;
		}
		return true;
	}*/
};


#endif // !STRING_H
