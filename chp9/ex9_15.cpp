//ex9.15: write a program to determine whether two vector<int>s are equal

#include <iostream>
#include <vector>

int main(){
	std::vector<int> s1 = {1,2,3,4,5,6};
	std::vector<int> s2 = {1,2,3};

	if (s1 == s2)
		std::cout << "the vectors are equal" << std::endl;
	else
		std::cout << "The vectors aren't equal" << std::endl;

	return 0;
}
