
#include "Header.h"
#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>

#define PI 3.14159265

int main() {
	double ch{}, a, b = 0;
	double result = 1;
	system("COLOR C");

	while (ch != 17) {
		std::cout << "\t\t---------------------------------Welcome to the MENU-------------------------------\n\n\n";
		std::cout << "\t\t 1. Addition       2. Subtraction       3. Multiplication       4. Division\n\n\n";
		std::cout << "\t\t 5. Square root       6. Cube Root      7. x^2       8. x^3      9. x ^ y \n\n\n";
		std::cout << "\t\t 10. x! 11. e ^ x      12. log(x)       13. ln(x)    14. sin(x)      15. cos(x)\n\n\n";
		std::cout << "\t\t 16. tan(x)        17. cot(x)     18. arccos(x)      19. arcsin(x)     20. arctan(x)\n\n\n";
		std::cout << "\t\t 21. arccot(x)     22. NOT natural logarithm     23. logarithm with value 1\n\n\n"; 
		std::cout << "\t\t 24. sum of natural logarithm        25. subtraction of natural logarithm\n\n\n";
		std::cout << "\t\t 26. division of natural logarithm     27. multiplication of natural logarithm \n\n\n";
		std::cout << "\t\t 28. Exit\n\n\n";
		std::cout << "\t\t Enter your choice : ";
		std::cin >> ch;

		if(ch > 28 || ch < 1 || ch != (double)ch) {
			std::cout << "Wrong Input\n";
			std::cin.clear();
			main();
			break;
		}

		//find Addition
		if (ch == 1) {
			std::cout << "\t\t Enter 1st num : ";
			std::cin >> a;
			std::cout << "\t\t Enter 2nd num : ";
			std::cin >> b;
			if (a != (double)a || b != (double)b) {
				std::cout << "\t\t Wrong Input\n";
				std::cin.clear();
				break;
			}
			std::cout << "\t\t " << a << " + " << b << " = " << a + b << std::endl;
			a = 0;
			b = 0;
		}

		//find subtraction 
		else if (ch == 2) {
			std::cout << "\t\t Enter 1st num : ";
			std::cin >> a;
			std::cout << "\t\t Enter 2nd num : ";
			std::cin >> b;
			if (a != (double)a || b != (double)b) {
				std::cout << "\t\t Wrong Input\n";
				std::cin.clear();
				break;
			}
			std::cout << "\t\t " << a << " - " << b << " = " << a - b << std::endl;
			a = 0;
			b = 0;
		}

		//find multiplication 
		else if (ch == 3) {
			std::cout << "\t\t Enter 1st num : ";
			std::cin >> a;
			std::cout << "\t\t Enter 2nd num : ";
			std::cin >> b;
			if (a != (double)a || b != (double)b) {
				std::cout << "\t\t Wrong Input\n";
				std::cin.clear();
				break;
			} 
			std::cout << "\t\t " << a << " * " << b << " = " << a * b << std::endl;
			a = 0;
			b = 0;
		}

		//find division 
		else if (ch == 4) {
			std::cout << "\t\t Enter 1st num : ";
			std::cin >> a;
			std::cout << "\t\t Enter 2nd num : ";
			std::cin >> b;
			if (a != (double)a || b != (double)b) {
				std::cout << "Wrong Input\n";
				std::cin.clear();
				break;
			}
			std::cout << "\t\t " << a << " / " << b << " = " << a / b << std::endl;
			a = 0;
			b = 0;
		}

		//find Square root
		else if (ch == 5) {
			std::cout << "\t\t Enter num : ";
			std::cin >> a;
			if (a != (double)a) {
				std::cout << "\t\t Wrong Input\n";
				std::cin.clear();
				break;
			}
			std::cout << "\t\t Squre root of " << a << " = " << sqrt(a) << std::endl;
			a = 0;
		}

		//find Cube Root
		else if (ch == 6) {
			std::cout << "\t\t Enter num : ";
			std::cin >> a;
			if (a != (double)a) {
				std::cout << "\t\t Wrong Input\n";
				std::cin.clear();
				break;
			}
			std::cout << "\t\t Cube root of " << a << " = " << cbrt(a) << std::endl;
			a = 0;
		}

		//find x^2
		else if (ch == 7) {
			std::cout << "\t\t Enter num : ";
			std::cin >> a;
			if (a != (double)a) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			std::cout << "\t\t Squere degree of " << a << " = " << pow(a, 2) << std::endl;
			a = 0;
		}

		//find x^3 
		else if (ch == 8) {
			std::cout << "\t\t Enter num : ";
			std::cin >> a;
			if (a != (double)a) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			std::cout << "\t\t Cube degree of " << a << " = " << pow(a, 3) << std::endl;
			a = 0;
		}

		//find  x ^ y
		else if (ch == 9) {
			std::cout << "\t\t Enter 1st num :";
			std::cin >> a;
			std::cout << "\t\t Enter 2nd num :";
			std::cin >> b;
			if (a != (double)a || b != (double)b) {
				std::cout << "\t\tWrong input\n";
				std::cin.clear();
				break;
			}
			std::cout << "\t\t " << a << " in " << b << " degree = " << pow(a, b) << std::endl;
			a = 0;
		}

		//find x!
		else if (ch == 10) {
			std::cout << "\t\t Enter num : ";
			std::cin >> a;
			if (a != (double)a) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			for (int i = 1; i <= a; i++) {
				result *= i;
			}
			std::cout << "\t\t " << a << " ! = " << result << std::endl;
			a = 0;
			result = 1;
		}

		//find e ^ x  
		else if (ch == 11) {
			std::cout << "\t\t Enter num :";
			std::cin >> a;
			if (a != (double)a) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			std::cout<< "\t\t " << "e^" << a << " = " << exp(a) << std::endl;
			a = 0;
		}

		//find log
		else if (ch == 12) {
			std::cout << "\t\t Enter num :";
			std::cin >> a;
			if (a != (double)a) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			std::cout << "\t\t log(" << a << ") = " << log(a) << std::endl;
			a = 0;
		}

		//find ln
		else if (ch == 13) {
			std::cout << "\t\t Enter num :";
			std::cin >> a;
			if (a != (double)a) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			std::cout << "\t\t ln(" << a << ") = " << log(a) << std::endl;
			a = 0;
		}

		//find sin
		else if (ch == 14) {
			std::cout << "\t\t Enter num in degrees : ";
			std::cin >> a;
			if (a != (double)a) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			b = a;
			a = (double)(a * PI) / 180;
			std::cout << "\t\t sin(" << b << ") = " << sin(a) << std::endl;
			a, b = 0;
		}

		//find cos
		else if (ch == 15) {
			std::cout << "\t\t Enter num in degrees : ";
			std::cin >> a;
			if (a != (double)a) {
				std::cout << "\t\tWrong input\n";
				std::cin.clear();
				break;
			}
			b = a;
			a = (double)(a * PI) / 180;
			std::cout << "\t\t cos(" << b << ") = " << cos(a) << std::endl;
			a, b = 0;
		}

		//find tan
		else if (ch == 16) {
			std::cout << "\t\t Enter num in degrees : ";
			std::cin >> a;
			if (a != (double)a) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			b = a;
			a = (double)(a * PI) / 180;
			std::cout << "\t\t tan(" << b << ") = " << tan(a) << std::endl;
			a, b = 0;
		}

		//find cot
		else if (ch == 17) {
			std::cout << "\t\t Enter num in degrees : ";
			std::cin >> a;
			if (a != (double)a) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			b = a;
			a = (double)(a * PI) / 180;
			std::cout << "\t\t cot(" << b << ") = " << 1.0 / tan(a) << std::endl;
			a, b = 0;
		}

		//find arccos
		else if (ch == 18) {
			std::cout << "\t\t Enter num in degrees : ";
			std::cin >> a;
			if (a != (double)a) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			b = a;
			a = (double)(a * PI) / 180;
			std::cout << "\t\t arccos(" << b << ") = " << acos(a) << std::endl;
			a, b = 0;
		}

		//find arcsin
		else if (ch == 19) {
			std::cout << "\t\t Enter num in degrees : ";
			std::cin >> a;
			if (a != (double)a) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			b = a;
			a = (double)(a * PI) / 180;
			std::cout << "\t\t arcsin(" << b << ") = " << asin(a) << std::endl;
			a, b = 0;
		}

		//find arctan
		else if (ch == 20) {
			std::cout << "\t\t Enter num in degrees : ";
			std::cin >> a;
			if (a != (double)a) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			b = a;
			a = (double)(a * PI) / 180;
			std::cout << "\t\t arctan(" << b << ") = " << atan(a) << std::endl;
			a, b = 0;
		}

		//find arccot
		else if (ch == 21) {
			std::cout << "\t\t Enter num in degrees : ";
			std::cin >> a;
			if (a != (double)a) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			b = a;
			a = (double)(a * PI) / 180;
			std::cout << "\t\t arccot(" << b << ") = " << 1.0 / atan(a) << std::endl;
			a, b = 0;
		}

		//find NOT natural logarithm 
		else if (ch == 22) {
			std::cout << "\t\t Enter base of logarithm : ";
			std :: cin >> a;
			std::cout << "\t\t Enter value of logarithm : ";
			std::cin >> b;
			if (a != (double)a || b != (double)b) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			std::cout << "\t\t log_" << a << "^" << b << " = " << log(b) / log(a) ;
			a = 0;
			b = 0;
		}

		//logarithm with value 1 
		else if (ch == 23 ) {
			std::cout << "\t\t Enter base of logarithm : ";
			std::cin >> a;
			if (a != (double)a) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			std::cout << "\t\t log_" << a << "^" << 1 << " = " << 0;
			a = 0;
		}

		// sum of natural logarithm 
		else if (ch == 24 ) {
			std::cout << "\t\t Enter the 1st num : ";
			std::cin >> a;
			std::cout << "\t\t Enter the 2nd num : ";
			std::cin >> b;
			if (a != (double)a || b != (double)b) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			std::cout << "\t\t log_" << a << " + " << "log_" << b << " = " << log(a) + log(b);
			a = 0;
			b = 0;
		}

		//subtraction of natural logarithm 
		else if (ch == 25) {
			std::cout << "\t\t Enter the 1st num : ";
			std::cin >> a;
			std::cout << "\t\t Enter the 2nd num : ";
			std::cin >> b;
			if (a != (double)a || b != (double)b) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			std::cout << "\t\t log_" << a << " - " << "log_" << b << " = " << log(a) - log(b);
			a = 0;
			b = 0;
		}

		//division of natural logarithm 
		else if (ch == 26) {
			std::cout << "\t\t Enter the 1st num : ";
			std::cin >> a;
			std::cout << "\t\t Enter the 2nd num : ";
			std::cin >> b;
			if (a != (double)a || b != (double)b) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			std::cout << "\t\t log_" << a << " / " << "log_" << b << " = " << log(a) / log(b);
			a = 0;
			b = 0;
		}

		//multiplication of natural logarithm 
		else if (ch == 27) {
			std::cout << "\t\t Enter the 1st num : ";
			std::cin >> a;
			std::cout << "\t\t Enter the 2nd num : ";
			std::cin >> b;
			if (a != (double)a || b != (double)b) {
				std::cout << "\t\t Wrong input\n";
				std::cin.clear();
				break;
			}
			std::cout << "\t\t log_" << a << " * " << "log_" << b << " = " << log(a) * log(b);
			a = 0;
			b = 0;
		}

		else if (ch == 28) {
			break;
		}
		if (ch == 28) {
			std::cout << "\t\t Exiting...\n";
			Sleep(1500);
		}
		system("pause");
		return 0;
	}




};









