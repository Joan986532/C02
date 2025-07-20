#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point A(0, 0);
	Point B(5, 0);
	Point C(0, 5);
	Point P(1, 1);

std::cout << "Testing point values:\n";
std::cout << "A = (" << A.get_xValue().toFloat() << ", " << A.get_yValue().toFloat() << ")\n";
std::cout << "B = (" << B.get_xValue().toFloat() << ", " << B.get_yValue().toFloat() << ")\n";
std::cout << "C = (" << C.get_xValue().toFloat() << ", " << C.get_yValue().toFloat() << ")\n";
std::cout << "P = (" << P.get_xValue().toFloat() << ", " << P.get_yValue().toFloat() << ")\n";

	if (bsp(A, B, C, P))
		std::cout << "I'm in the triangle" << std::endl;
	else
		std::cout << "I'm OUTSIDE ! Let me in" << std::endl;
	return (0);
}
