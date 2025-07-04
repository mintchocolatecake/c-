#include <iostream>
//함수
//factoral

int main() {

	int i = 0;//모듈화
	std::cin >> i;
	int value = 1;

	//factoral수보다 1번덜 반복하면 된다
	for (int j = 0; j < i; ++j) {
		
		value *= (j + 1);

		
		
		

	}
	std::cout << value << std::endl;
	return 0;
	


}