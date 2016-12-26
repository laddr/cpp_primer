//ex10.3: use accumulate to sum the elements in a vector<int>

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main (){

	std::vector<int> v1 = {1,2,3,6,8,9,15,16,22,45,89,32,132,569};

	//use cbegin & cend since we only need to read the elements in the vector
	int sum =  std::accumulate(v1.cbegin(),v1.cend(),0);

	std::cout << "The sum is: " << sum << std::endl;

	return 0;
}