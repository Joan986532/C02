#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point A(0, 0);
	Point B(10, 30);
	Point C(20, 0);
	Point P(10, 15);

std::cout << "Testing point values:\n";
std::cout << "A = (" << A.get_xValue().toFloat() << ", " << A.get_yValue().toFloat() << ")\n";
std::cout << "B = (" << B.get_xValue().toFloat() << ", " << B.get_yValue().toFloat() << ")\n";
std::cout << "C = (" << C.get_xValue().toFloat() << ", " << C.get_yValue().toFloat() << ")\n";
std::cout << "P = (" << P.get_xValue().toFloat() << ", " << P.get_yValue().toFloat() << ")\n";

	if (bsp(A, B, C, P))
		std::cout << "INSIDE" << std::endl;
	else
		std::cout << "OUTSIDE" << std::endl;
	return (0);
}
