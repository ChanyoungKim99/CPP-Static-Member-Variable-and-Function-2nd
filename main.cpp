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
	// static ��� �Լ��� ǥ���� ���ϼ��� ����
	// ����� ���ǰ� ���� �پ��־ �������!
};

int OrderGenerator::sNumber{ 0 };

int main()
{
	OrderGenerator c1; 
	// ��ȣǥ�� ��ȣ�� �ν��Ͻ��� ����� ������Ѵ�.
	// ex) 1�� ��ȣǥ���� 10��, 2�� ��ȣǥ���� 10���� ���ͼ��� �ȵǴϱ�!

	OrderGenerator c2;
	OrderGenerator c3;
	OrderGenerator c4;

	std::cout << c1.CreateNewOrder() << std::endl;
	std::cout << c2.CreateNewOrder() << std::endl;
	std::cout << c3.CreateNewOrder() << std::endl;
	std::cout << c4.CreateNewOrder() << std::endl;

	std::cout << OrderGenerator::CreateNewOrder() << std::endl;
	// �ν��Ͻ��� ��� �̷��� ǥ���� �����ϴ�!
}


// �ν��Ͻ��� ������� ������� �����ؾ��ϴ� �����̳� �Լ���
// �̷��� static�� �̿��ϸ� �ſ� ���ϴ�