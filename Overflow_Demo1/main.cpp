//Program to demonstrate the effects of overflow. Please note that this better understood if you first
//review how signed integers are stored (always stored as the twos complement of the binary equivalent).

#include<iostream>
#include<climits>

int main() {

	int number1 = 2;

	for (int i = 1; i <= 15; i++) {

		std::cout << number1 << std::endl;
		number1 *= 10;
	}
	std::cout << std::endl;
	std::cout << "Note that the output changed from positive to negative" << std::endl << std::endl
		<< "when the value of number was 2,000,000,000." << std::endl << std::endl
		<< "The next value should be 20,000,000,000 which" << std::endl << std::endl
		<< "is larger than the greatest integer that can be" << std::endl << std::endl
		<< "respresented with 32 bits: 2,147,483,647." << std::endl << std::endl;


	int number2 = INT_MAX - 3;

	for (int i = 1; i <= 7; i++) {

		std::cout << number2 << std::endl;
		number2++;
	}
	std::cout << std::endl;
	std::cout << "To understand why the values switch from positive to negative," << std::endl
		<< "note that the leftmost bit is reserved for sign, and that when" << std::endl
		<< "number2 = 2,147,483,647, the binary representation is" << std::endl
		<< "01111111111111111111111111111111, which upon adding 1," << std::endl
		<< "looses the last carry bit and becomes instead the 2's" << std::endl
		<< "complement represenation of - 2,147,483,648." << std::endl << std::endl;

	std::cout << "Note that signed integers are always stored in memory as the binary" << std::endl
		<< "equivalent of the twos complement for that specific integer." << std::endl
		<< "See http://www.cs.uwm.edu/classes/cs315/Bacon/Lecture/HTML/ch04s13.html" << std::endl
		<< "for detailed explanation about how rightmost bit is reserved for sign." << std::endl << std::endl;

	std::cout << "In summary, in C++, Overflow causes a wrap around behaviour." << std::endl
		<< "When a value in the range [INT_MIN, INT_MAX] reaches one end" << std::endl
		<< "it simply begins again at the other end as though the integers" << std::endl
		<< "were arranged in a circle with INT_MIN next to INT_MAX." << std::endl;

	return 0;
}