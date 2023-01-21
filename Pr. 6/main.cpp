#include<iostream>
#include<vector>
using std::vector;

//������� �������� �������� ��� �������� � ����������������� �� ������ :
//1. push_back, erase, insert
//2. emplace_back
//3. resize, reserve, shrink_to_fit, capacity
//4. clear
//5. �������� ������������ � []
//������� ������ ������� � ������ ������ ���������, ������ ������ ���.


void print(vector<int>& vect) // ����� ����������� ������� 
{
	for (int i = 0; i < vect.size(); i++)
		std::cout << vect[i] << " ";
}

int main()
{
	vector<int> myVec = { 1,2,3,4 }; // �������� ������� � ������������� ������ ���������
	std::cout << "MyVec: " << "\t";

	print(myVec);
	std::cout << std::endl;


	// 1.1 
	// push_back() - �����, ����������� �������� ������� � ����� ������� 

		//myVec.push_back(123); 
		//print(myVec);

	// 1.2
	// erase() - �����, ��������� �������(��� �������� ���������) �������

		//myVec.erase(myVec.begin()+1,myVec.end()-1); // begin() � end() - ���������(?) �� ������ � ��������� �������� ������� �������������� 
		//print(myVec);

	// 1.3
	// insert() - �����, ����������� �������� �������(��� ��������� ���������) � ����������� ������� � �������

		//myVec.insert(myVec.begin() + 1, 5);
		//print(myVec);

	// 2
	// emplace_back() - �����, ����������� �������� ������� � ����� ������� (��� ��, ��� � push_back())

		//myVec.emplace_back(321);
		//print(myVec);

	// 3.1
	// resize() - �����, ����������� �������� ������ ������� 

		//myVec.resize(2); // �������� ������ �� 2 ���������
		//print(myVec);

		//myVec.resize(6, 9); // �������� ������ �� 6-� ���������, �������� ����� ������� ��������� 9
		//print(myVec);


	// 3.2, 3.4 
	// reserve() - �����, ������ ����������� ��������������� ������ ��� ��������� �������
	// capacity() - �����, ������� ���������� ���������� ���������, ���������� ��� �������

		//std::cout << myVec.capacity() << std::endl; 

		//myVec.reserve(10);

		//std::cout << myVec.capacity() << std::endl;


	// 3.3
	// shrink_to_fit() - �����, ����������� ��������� ������, ���������� ��� ��������� ������� � �������, ������� ���������� ����� �������

		//myVec.reserve(10);
		//std::cout << myVec.capacity() << std::endl;

		//myVec.shrink_to_fit();

		//std::cout << myVec.capacity() << std::endl;

	// 4
	// clear() - �����, ��������� ��� �������� �������

		//myVec.clear();
		//print(myVec);

	// 5
	// �������� ������������ � []

		//vector<int> myVec2(15);

		//myVec2 = myVec; // ��������� ��������� ������ ������� �������� ������� 

		//print(myVec2);
		//std::cout << std::endl;

		//std::cout << myVec[0] << " < " << myVec[1] << std::endl; // ��������� ���������� � ������������ �������� 

	//std::cout << sizeof(myVec) << std::endl;
}