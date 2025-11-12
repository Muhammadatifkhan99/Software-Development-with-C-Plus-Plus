#include<iostream>
#include<random>

int main(){
	//create random number generator
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution dist(0,100);

	//Run a performing some calculations
	int sum = 0;
	while(true){
	auto divisior = dist(mt);
	
	//Add some value to sum
	//This is a bug! Our random number generator can return 0
	sum += 10 % divisior;

	//Break out  with  some  condition 
	if(sum > 200) break;
	}
	
	std::cout << sum <<std:: endl;
	return 0;
}
