#include <iostream>
using namespace std;

class Point
{
	double x;
	double y;

public:
	double Getx()
	{
		return x;
	}
	double Gety()
	{
		return y;
	}
};

double distance(double a_x, double a_y, double b_x, double b_y) 
{
    return sqrt((a_x - b_x)* (a_x - b_x) + (a_y - b_y)* (a_y - b_y));
}

int main() 
{
    setlocale(LC_ALL, "");
    double a_x, a_y;
	cout << "������� ���������� a_x, a_y: ";
    cin >> a_x >> a_y;

    cout << "���������� �� ����� �����: " << distance(a_x, a_y, 0, 0) << endl;

	double b_x, b_y;
	cout << "������� ���������� b_x, b_y: ";
	cin >> b_x >> b_y;

	cout << "���������� ����� ������� �����: " << distance(a_x, a_y,b_x, b_y) << endl;
}

