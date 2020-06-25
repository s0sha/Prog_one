// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#include "Person.h"
#include "Dateof.h"
#include "myInterface.h"
#include <windows.h>


//I am using 3 header files I have created. The Date.h is used to hold a structure for a Date type. The Person.h can be
//used to use hold details such as name, DOB of a person. The myInterface.h is used as an interface program to receive input from user. 

int main()
{
	int xcount{ 0 };
	std::string getname{ "Enter Your Name : " }, getDOB{ "Enter A Date (Year Month Date) : " };
	std::string rtnmsg{ "" }, rtninput{ "" }, rtndate{""};
	myInterface obj1;


	Person s0sha(100, "S0sha", { 01,01,2020 });
	s0sha.returnDetails();
		

	std::cout << getname;
	

	//A loop to receive a input string from user for name.
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

	
	// In the below loop the user is to enter a 3 numbers which will be the year, month and date that they want to enter. 	
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
		
		
		// Finally the below code displays it.
		std::cout << "  Hello " << rtnmsg << "\n";
		rtndate = dtToday.printDate();
		std::cout << "  Your Lucky Date is " << rtndate << "\n\n\n\n";
		
		std::cin >>  rtninput;
		std::cout << "Program Exit  "  << rtninput;
				
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
