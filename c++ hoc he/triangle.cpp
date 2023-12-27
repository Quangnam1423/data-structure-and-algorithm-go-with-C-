#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

#define PI 3.141592653589793238
using namespace std;

struct Spot{
	double x , y;
};

struct Edge{
	double length;
	Edge(Spot A , Spot B)
	{
		this->length = std::sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
	}
};

void nhap(Spot &A)
{
	std::cin >> A.x >> A.y;
	return;
}

bool Condition(Edge a , Edge b , Edge c)
{
	if (a.length + b.length <= c.length) return false;
	if (a.length + c.length <= b.length) return false;
	if (c.length + b.length <= a.length) return false;
	return true;	
}

void handle(Edge AB , Edge AC , Edge BC)
{
	double S = std::sqrt((AB.length + AC.length + BC.length) * (AB.length + AC.length - BC.length) * 
	(AB.length - AC.length + BC.length) * (BC.length + AC.length - AB.length)) / 4;
	double R = AB.length * AC.length * BC.length / (4 * S);
	std::cout << std::fixed << std::setprecision(3) << R * R * PI;
}

int main()
{
	int t; std::cin >> t;
	while(t--)
	{
		Spot A , B , C;
		nhap(A);nhap(B);nhap(C);
		Edge AB(A , B) , AC(A , C) , BC(B , C);
		if (Condition(AB , AC , BC) == true)
		{
			handle(AB , AC , BC); 
		}
		else std::cout << "INVALID";
		std::cout << std::endl;
	}
	return 0;
}
