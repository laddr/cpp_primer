//exercise 9.14: write a program to assign the  elements from a list of char* pointers 
//to C-style character strings to a vector of strings


#include <iostream>
#include <string>
#include <vector>
#include <list>

int main(){
	std::list<const char*> lst = {"apple", "bananas", "plums", "kiwis"};
	std::vector<std::string> v;
	v.assign(lst.cbegin(),lst.cend());
	for(auto ptr : v){
		std::cout << ptr << std::endl;
	}

	return 0;
}
