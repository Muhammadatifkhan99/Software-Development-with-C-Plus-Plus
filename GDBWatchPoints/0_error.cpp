#include<iostream>


int main(){
	const int N = 1 << 10;
	auto p = new int[N];
	
	for(int i{0};i<N;i++){
		p[i] = 10;
	}

	for(int i{0};i<N;i++){
		p[i] = 20;
	}
	return 0;
}
