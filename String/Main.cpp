#include <stdio.h>
#include <iostream>
#include "String.h"

int main() {
	String a("hello");
	printf_s("%s", &a);
	String b(a);
	
	getchar();
	getchar();
}