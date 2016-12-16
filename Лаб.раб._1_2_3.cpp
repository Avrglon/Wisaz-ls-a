#include<iostream>
using namespace std;

int main()
{
	setlocale(0, "rus");
	int N,i=0;
	float A, B,F=0;
	cout << "Введите количество точек :";
	cin >> N;
	cout << "Введите значение точки А:";
	cin >> A;
	cout << "Введите значение точки  В:";
	cin >> B;
	if (N > 2 && A < B)
	{
		while (i != N)
		{
			
			F += (1 - sin(A));
			i++;
			
			
		}
		cout << F << endl;
	}
	system("pause");
	return 0;
}