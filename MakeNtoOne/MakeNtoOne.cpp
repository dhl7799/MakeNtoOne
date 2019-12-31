#include<iostream>
#include<algorithm>
#include<cstring>
//https://www.acmicpc.net/problem/1463
using namespace std;

class MakeOne
{
private:
	int n;
	int array[1000];

public:
	MakeOne()
		:n(0)
	{
		memset(array, 0, sizeof(int)*n);
	}
	void setN()
	{
		cout << "N값을 입력하세요: ";
		cin >> n;
		cout << endl;
	}

	void Calculate()
	{
		array[1] = 0;
		for (int i = 2; i < n + 1; i++)
		{
			array[i] = array[i - 1] + 1;
			if (i % 2 == 0)
			{
				array[i] = min(array[i], array[i / 2]+1);
			}
			if (i % 3 == 0)
			{
				array[i] = min(array[i], array[i / 3]+1);
			}
		}
	}
	void print()
	{
		cout << "Tried for " << array[n] << "time " << endl;
	}

};


int main()
{
	MakeOne first;
	first.setN();
	first.Calculate();
	first.print();
	return 0;
}