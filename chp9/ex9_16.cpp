//ex9.16: repeat the previous program, but compare elements in a list<int> to a vector<int>

#include <iostream>
#include <vector>
#include <list>

int main(){
	std::vector<int> v1 = {1,2,3,4,5,6};
	std::list<int> li1 = {1,2,3};

	
	//since to use relational operators the containers have to be same kind and type
	//use iterators to copy list into a vector
	if (std::vector<int>(li1.begin(), li1.end()) == v1){
		std::cout << "The list and the vector are equal!" << std::endl;
	}
	else{
		std::cout << "The list and the vector are not equal!" << std::endl;
	}

	//std::cout << (std::vector<int>(li.begin(), li.end()) == v1 ? "true" : "false") << std::endl;

	return 0;
}