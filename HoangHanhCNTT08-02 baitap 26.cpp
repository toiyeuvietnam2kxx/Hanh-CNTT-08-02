// CHƯƠNG TRÌNH TÍNH S= 1/2 + 2/3 + 3/4 +…+ N/ (N+1)
#include<iostream>
using namespace std;
void main()
{

	int i, n;

	float S = 0;

	cout << "Nhap n="; cin >> n; cin.ignore();

	for (i = 1; i <= n; i++)

	{

		S = S + (float)i / (i + 1);

	}

	cout << " Vay s =  " << S;
	cin.get();


}