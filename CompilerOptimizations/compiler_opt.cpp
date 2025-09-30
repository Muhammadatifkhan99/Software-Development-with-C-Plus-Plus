#include<vector> 

int main(){
	//create a vector of 2^28
	auto num_element = 1 << 28;
	std::vector<int>  vector(num_element);
	//module each value
	for(auto &value:vector){
		value %= 20;
	}
}
