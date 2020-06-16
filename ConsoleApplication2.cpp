// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#include "Person.h"
#include "Dateof.h"
#include "myInterface.h"
#include <windows.h>




int main()
{
	int xcount{ 0 };
	std::string getname{ "Enter Your Name : " }, getDOB{ "Enter A Date (Year Month Date) : " };
	std::string rtnmsg{ "" }, rtninput{ "" }, rtndate{""};
	myInterface obj1;


	Person s0sha(100, "S0sha", { 01,01,2020 });
	s0sha.returnDetails();
		

	std::cout << getname;
	

	
	while ( true)
	{

		rtnmsg = obj1.enterStrValue();
		
		if (rtnmsg == obj1.rtninput) {
				
				break;
		}
		else {
			std::cout << rtnmsg << "   ";
			continue;
		}

	}

	
		
	Dateof dtToday;
	int num1{0}, num2{0}, num3{0};
		std::cout << getDOB;
		while (true) {

			if (num1 = obj1.enterNum('y')) {
				if (dtToday.validateYear(num1)) {
					
					
					dtToday.bYear = num1;

					break;
				}
				else {
					std::cout << "Incorrect Year  : ";

				}
				
			}
			else { continue; }


		}
						
		while (true) {
			
			if (num2 = obj1.enterNum('m')) {

				if (dtToday.validateMonth(num2)) {
					
					dtToday.bMonth = num2;
					break;
				}
				else {
					std::cout << "Incorrect Month : ";
				}
								
				
			}
		}
		
		while (true) {
			if (num3 = obj1.enterNum('d')) {
							
				dtToday.validateDay(num3, num2, num1);
				
				if (dtToday.validate) {
					break;
				}
				else {
					std::cout << "Incorrect Date  : ";
				}
			
							
			}
				
				
			}
		
		
		
		std::cout << "  Hello " << rtnmsg << "\n";
		rtndate = dtToday.printDate();
		std::cout << "  Your Lucky Date is " << rtndate << "\n\n\n\n";
		
		std::cin >>  rtninput;
		std::cout << "Program Exit  "  << rtninput;
				
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
