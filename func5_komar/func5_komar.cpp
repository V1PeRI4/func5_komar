#include <iostream>
using namespace std;

float celsToFaring(float);

int main()
{
	setlocale(LC_ALL, "Russian");

	float temp;
	cout << "Введите градусы в цельсиях: ";
	cin >> temp;
	float tempFin = celsToFaring(temp);
	cout << temp << " градусов Цельсия - это " << tempFin << " градусов по Фарингейту";
	return 0;
}

float  celsToFaring(float sts)
{
	sts = sts * 1.8 + 32;
	return sts;
}