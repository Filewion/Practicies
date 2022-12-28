#include<iostream>
#include<fstream>
using std::ifstream;
using std::ofstream;
using std::cout;
using std::cin;
using std::endl;

//� ��������� ����� input.txt ������� ������� �����.����� � ������ �����, ���������� ��� ���������� ����� ������, �������� �� ���������� 
//������� � ������� ����� ������� ������ ����� � ������� ��������� �����.
//���������� ����� �������� � ���� output.txt.���� �����, ����� ��������� ����, ������ �������� ����������, ������� � ����� ����������



void upp(char a[],char &c)
{
	for (int i = 0; i < strlen(a); i++)
	{
		if ((a[i] >= '�') && (a[i] <= '�'))
		{
			a[i] = ((int)a[i]) - 32;
			c = '\0';
		}
		else if (a[i] == '�')
		{
			a[i] = '�';
			c = '\0';
		}
		else if (a[i] < '�' || a[i]>'�')
		{
			c = a[i];
			a[i] = '\0';
		}
	}
}
char doublecheck(char a[])
{
	for (int i = 0; i < strlen(a)-1; i++)
	{
		if (( (a[i] == a[i + 1]) || a[i]+32 == a[i+1] ) && ( (a[i+1] >= '�') && (a[i+1] <= '�')))
		{
			return a[i];
		}
	}
	return ' ';
}

int main()
{
	setlocale(LC_ALL, "rus");
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	const int n = 15;
	char a[n]{},b,c = '\0';
 	while(!fin.eof())
	{
		fin >> a;
		b = doublecheck(a);
		if (b != ' ')
		{
			upp(a,c);
			fout << a << "(" << b << b << ")" << c;
			if (c != '\0')
				fout << " ";
		}
		else
		{
			fout << a << " ";
		}
	}
}



