#include <iostream>

class OrderGenerator
{
private:
	static int sNumber;

public:
	static int CreateNewOrder()
	{
		return ++sNumber;
	}
	// static 멤버 함수는 표기의 통일성을 위해
	// 선언과 정의가 같이 붙어있어도 상관없다!
};

int OrderGenerator::sNumber{ 0 };

int main()
{
	OrderGenerator c1; 
	// 번호표의 번호는 인스턴스와 상관이 없어야한다.
	// ex) 1번 번호표에서 10번, 2번 번호표에서 10번이 나와서는 안되니까!

	OrderGenerator c2;
	OrderGenerator c3;
	OrderGenerator c4;

	std::cout << c1.CreateNewOrder() << std::endl;
	std::cout << c2.CreateNewOrder() << std::endl;
	std::cout << c3.CreateNewOrder() << std::endl;
	std::cout << c4.CreateNewOrder() << std::endl;

	std::cout << OrderGenerator::CreateNewOrder() << std::endl;
	// 인스턴스가 없어도 이렇게 표현이 가능하다!
}


// 인스턴스와 상관없이 만들어져 유지해야하는 값들이나 함수는
// 이렇게 static을 이용하면 매우 편리하다